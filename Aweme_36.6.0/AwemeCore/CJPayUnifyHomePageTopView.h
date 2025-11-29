@class CJPayBDCircularCarouselRegion, UIImageView, NSString, CJPayCycleScrollView;

@interface CJPayUnifyHomePageTopView : UIView <CJPayCycleScrollViewDelegate>

@property (retain, nonatomic) CJPayBDCircularCarouselRegion *carouselAreaInfo;
@property (nonatomic) BOOL shouldShowAvatar;
@property (retain, nonatomic) CJPayCycleScrollView *carouselAreaScrollView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (copy, nonatomic) id /* block */ clickAvatarBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfRowsWithCycleScrollView:(id)a0;
- (id)cycleScrollView:(id)a0 cellForItemAtIndex:(long long)a1 originalIndex:(long long)a2;
- (BOOL)isNeedShowTopView;
- (void)p_clickAvatar;
- (BOOL)isNeedShowCarouselAreaInfo;
- (BOOL)isShouldShowAvatar;
- (void)updateWithCircularCarouselRegion:(id)a0 avatarURL:(id)a1 shouldShowAvatar:(BOOL)a2;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
