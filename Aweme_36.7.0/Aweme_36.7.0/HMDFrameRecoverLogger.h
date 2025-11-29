@class NSString;

@interface HMDFrameRecoverLogger : NSObject <HMDFrameRecoverLogProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)logLevel:(unsigned long long)a0 fileName:(const char *)a1 functionName:(const char *)a2 lineNumber:(int)a3 string:(const char *)a4;


@end
