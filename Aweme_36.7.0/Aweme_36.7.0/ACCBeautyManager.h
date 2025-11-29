@class AWEComposerBeautyEffectViewModel;

@interface ACCBeautyManager : NSObject

@property (nonatomic) BOOL hasDetectMale;
@property (retain, nonatomic) AWEComposerBeautyEffectViewModel *composerEffectVM;

+ (id)defaultManager;

- (void)resetWhenQuitRecoder;
- (void).cxx_destruct;
- (id)init;

@end
