@class NSString;

@interface HMDDebugLogger : NSObject <HMDDebugLoggerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)printLog:(id)a0;
+ (void)enableDebugLogUsingLogger:(id /* block */)a0;
+ (void)printError:(id)a0;
+ (Class)service;


@end
