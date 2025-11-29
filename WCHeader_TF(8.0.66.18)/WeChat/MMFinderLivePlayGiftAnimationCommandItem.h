@class MMLiveHapticsPattern, MMFinderLivePlayGiftAnimationCommandResource;

@interface MMFinderLivePlayGiftAnimationCommandItem : NSObject

@property (retain, nonatomic) MMFinderLivePlayGiftAnimationCommandResource *animation;
@property (retain, nonatomic) MMFinderLivePlayGiftAnimationCommandResource *soundEffect;
@property (retain, nonatomic) MMLiveHapticsPattern *hapticsPattern;

+ (id)itemWithAnimation:(id)a0 extension:(id)a1;

- (void).cxx_destruct;

@end
