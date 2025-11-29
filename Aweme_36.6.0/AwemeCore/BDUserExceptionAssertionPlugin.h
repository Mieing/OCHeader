@class NSString;

@interface BDUserExceptionAssertionPlugin : NSObject <BDAssertionPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)handleFailureWithDesc:(id)a0;
+ (void)handleDebugFailureWithDesc:(id)a0;
+ (void)addPlugin;


@end
