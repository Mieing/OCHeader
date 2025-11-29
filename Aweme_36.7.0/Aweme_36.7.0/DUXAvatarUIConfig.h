@class DUXAvatarUIConfigModel;

@interface DUXAvatarUIConfig : NSObject

@property (retain, nonatomic) DUXAvatarUIConfigModel *normal;
@property (retain, nonatomic) DUXAvatarUIConfigModel *middle;
@property (retain, nonatomic) DUXAvatarUIConfigModel *large;

+ (id)sharedInstance;

- (id)configWithEnlargeType:(unsigned long long)a0;
- (void)setupWithDefault;
- (void)setupWithDefaultOld;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
