@class NSString;

@interface AWEEffectPlatformDYAdapter : NSObject <AWEEffectPlatformAdapter>

@property (readonly, nonatomic) NSString *accessKey;
@property (readonly, nonatomic) NSString *teenModeAccessKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;

- (id)weakTarget;

@end
