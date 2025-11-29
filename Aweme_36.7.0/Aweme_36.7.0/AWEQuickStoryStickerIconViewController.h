@class NSString, UIImageView, UIImage, AWEQuickStoryRecommendStickerModel, AWEAwemeModel;

@interface AWEQuickStoryStickerIconViewController : UIViewController <AWEBizTabBarLightModeListenerProtocol>

@property (retain, nonatomic) UIImageView *stickerIcon;
@property (retain, nonatomic) UIImageView *animationStickerIcon;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL isDismissing;
@property (nonatomic) BOOL useQuickStoryStickerIconViewHierarchyAdjust;
@property (retain, nonatomic) UIImage *momentInvertImage;
@property (retain, nonatomic) AWEQuickStoryRecommendStickerModel *stickerModel;
@property (copy, nonatomic) id /* block */ tapIconActionBlock;
@property (nonatomic) BOOL isShowingMomentGuide;
@property (retain, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchToLightModeWithProgress:(double)a0;
- (id)invertImageColors:(id)a0;
- (void)dismissStickerWithAnimation:(BOOL)a0;
- (void)updateSticker:(id)a0 withAwemeModel:(id)a1;
- (void)showSticker:(id)a0 withAwemeModel:(id)a1;
- (void)trackFastCrossTriggerEventForMomentWithAweme:(id)a0;
- (void)showIconTransform;
- (void)stickerIconTapped:(id)a0;
- (void)stickerAddRadiusIfNeedWithIsClearRadius:(BOOL)a0;
- (void)p_trackFastCrossTriggerEventWithAwemeModel:(id)a0;
- (void)animationStickerAddRadiusIfNeed;
- (BOOL)currentAwemeModelIsAISticker;
- (double)stickerAddCornerValue;
- (id)imageWithDarkImage:(id)a0 lightImage:(id)a1 progress:(double)a2;
- (void)showIconWithImage:(id)a0 andMode:(unsigned long long)a1;
- (void)updateIconWithImage:(id)a0 andMode:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setupUI;

@end
