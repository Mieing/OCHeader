@class NSString;

@interface AWEStudioGlobalConfig : AWEStudioGlobalConfigDefault <AWEStudioGlobalConfig>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;
+ (id)sharedInstance;

- (id)weakTarget;

@end
