@class NSString, NSData, MMFinderLivePlayGiftAnimationCommandItem;

@interface MMFinderLivePlayGiftAnimationCommand : NSObject

@property (retain, nonatomic) NSString *correlationId;
@property (retain, nonatomic) MMFinderLivePlayGiftAnimationCommandItem *portraitAnimation;
@property (retain, nonatomic) MMFinderLivePlayGiftAnimationCommandItem *landscapeAnimation;
@property (nonatomic) unsigned int triggerType;
@property (retain, nonatomic) NSData *businessBuff;

+ (id)giftAnimationPlayCommandWithBackendMessage:(id)a0;

- (id)init;
- (id)initWithPortraitAnimation:(id)a0 portraitAnimationExtension:(id)a1 landscapeAnimation:(id)a2 landscapeAnimationExtension:(id)a3 triggerType:(unsigned int)a4 businessBuffer:(id)a5;
- (void).cxx_destruct;

@end
