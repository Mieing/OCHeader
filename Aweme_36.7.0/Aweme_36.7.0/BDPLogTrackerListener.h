@class NSString;

@interface BDPLogTrackerListener : NSObject <BDPLogListenerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (void)disposeLogWithlevel:(unsigned long long)a0 tag:(id)a1 fileName:(const char *)a2 funcName:(const char *)a3 line:(int)a4 content:(id)a5;

@end
