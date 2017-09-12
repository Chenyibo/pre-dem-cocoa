//
//  PREDLogger_private.h
//  Pods
//
//  Created by 王思宇 on 30/08/2017.
//
//

#ifndef PREDLogger_private_h
#define PREDLogger_private_h

#import "PREDLogger.h"
#import "PREDLogFileManager.h"
#import "PREDLogFormatter.h"

@interface PREDLogger (Private)
<
PREDLogFileManagerDelegate,
PREDLogFormatterDelegate
>

@property (class, nonatomic, strong) PREDNetworkClient *networkClient;

@end

#endif /* PREDLogger_private_h */