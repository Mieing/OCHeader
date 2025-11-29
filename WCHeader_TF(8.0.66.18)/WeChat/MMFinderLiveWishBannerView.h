@class NSString, NSArray, UIImageView, MMFinderLiveRewardWish, CAGradientLayer, FinderLiveGiftWallInfo, MMUILabel, NSMutableSet, MMTimer;

@interface MMFinderLiveWishBannerView : MMLiveBaseComponentView <MMFinderLiveGiftResourceMgrExt>

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIImageView *giftImageView;
@property (retain, nonatomic) MMTimer *scheduleTimer;
@property (nonatomic) unsigned int index;
@property (nonatomic) BOOL firstDisplay;
@property (nonatomic) unsigned long long productTotalCount;
@property (nonatomic) unsigned long long productCurCount;
@property (nonatomic) unsigned int lastWidth;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastFrame;
@property (nonatomic) BOOL isWishExposed;
@property (nonatomic) BOOL isGiftWallExposed;
@property (nonatomic) BOOL isGiftWallBanner;
@property (retain, nonatomic) NSArray *liveRewardWishes;
@property (retain, nonatomic) MMFinderLiveRewardWish *wishGiftItem;
@property (retain, nonatomic) FinderLiveGiftWallInfo *giftWallInfo;
@property (retain, nonatomic) NSMutableSet *wishRewardGiftIdSet;
@property (copy, nonatomic) id /* block */ clickedCallBlock;
@property (copy, nonatomic) id /* block */ exposedCallBlock;
@property (copy, nonatomic) id /* block */ uiChangedCallBlock;
@property (readonly, nonatomic) BOOL isGiftWishEnable;
@property (readonly, nonatomic) BOOL isGiftWallEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)defaultHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andTaskId:(id)a1 componentKey:(id)a2;
- (void)layoutSubviews;
- (BOOL)isAccessibilityElement;
- (void)layoutUI;
- (void)stopScheduleTimer;
- (void)startScheduleTimer:(unsigned long long)a0;
- (void)onDisplayWishGiftProgess;
- (void)showWithTitle:(id)a0 productTotalCount:(unsigned long long)a1 productCurCount:(unsigned long long)a2 liveRewardWishes:(id)a3 giftWallInfo:(id)a4;
- (void)updateGiftWallInfo:(id)a0;
- (BOOL)checkIfRewardhWishInfoChanged:(id)a0;
- (void)dismiss;
- (void)sizeToFits;
- (id)finderLiveTask;
- (void)updateWhenFontSizeChanged;
- (void)onLiveGiftResDownloadCompleted:(id)a0 retry:(unsigned long long)a1 totalLength:(unsigned long long)a2 resType:(long long)a3 productId:(id)a4 downloadUrl:(id)a5;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)onBannerClicked:(id)a0;
- (void).cxx_destruct;

@end
