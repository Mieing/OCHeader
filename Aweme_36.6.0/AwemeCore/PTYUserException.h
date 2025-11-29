@class NSString;

@interface PTYUserException : NSObject <PTYUserExceptionProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackAllThreads:(id)a0 skippedDepth:(int)a1 params:(id)a2 filters:(id)a3;
+ (void)trackCurrentThreads:(id)a0 skippedDepth:(int)a1 params:(id)a2 filters:(id)a3;
+ (void)setup:(id)a0;


@end
