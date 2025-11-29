@class UIFont, NSString, UIImageView, MMUILabel;

@interface MMFinderLiveFansGroupSignView : UIView <MMWebImageViewDelegate>

@property (retain, nonatomic) UIImageView *fansGroupBackView;
@property (retain, nonatomic) UIImageView *fansSignIconView;
@property (retain, nonatomic) MMUILabel *fansRankLabel;
@property (retain, nonatomic) MMUILabel *fansSignLabel;
@property (retain, nonatomic) UIImageView *fansSignTailView;
@property (nonatomic) BOOL isTransfering;
@property (nonatomic) double currentLayoutFontScale;
@property (nonatomic) BOOL forceLayout;
@property (nonatomic) struct CGSize { double width; double height; } originalIconImageSize;
@property (nonatomic) long long uiStyle;
@property (nonatomic) long long uiMode;
@property (nonatomic) long long uiShape;
@property (retain, nonatomic) NSString *fansGroupText;
@property (nonatomic) unsigned long long fansGroupRank;
@property (nonatomic) BOOL autoAdjustWidth;
@property (nonatomic) BOOL autoAdjustHeight;
@property (nonatomic) BOOL isSuperfan;
@property (nonatomic) BOOL forceClearBGColorForSuperfan;
@property (nonatomic) struct CGSize { double width; double height; } fanGroupIconSize;
@property (nonatomic) BOOL isFansGroupIconCenter;
@property (nonatomic) double fansGroupIconLeft;
@property (retain, nonatomic) UIFont *fanGroupTextFont;
@property (nonatomic) BOOL customAccessibilitySetting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })getFansGroupSignSizeWithName:(id)a0 uiStyle:(long long)a1 rank:(unsigned int)a2 isSuperfan:(BOOL)a3;
+ (struct CGSize { double x0; double x1; })getFansGroupSignSizeWithName:(id)a0 uiStyle:(long long)a1 rank:(unsigned int)a2 isSuperfan:(BOOL)a3 customFont:(id)a4;
+ (double)getFansSignLabelLeftWithStyle:(long long)a0 rank:(unsigned long long)a1 isSuperfan:(BOOL)a2;
+ (id)getFansGroupFontForUIStyle:(long long)a0;
+ (id)getRankImageWithRank:(unsigned long long)a0 isSuperfan:(BOOL)a1;
+ (unsigned int)FanMediumLevelLowerBound;
+ (unsigned int)FanHighLevelLowerBound;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithUIStyle:(long long)a0 uiMode:(long long)a1 isSuperfan:(BOOL)a2;
- (id)initWithUIStyle:(long long)a0 uiMode:(long long)a1 isSuperfan:(BOOL)a2 forceLayout:(BOOL)a3;
- (void)innerInit;
- (void)initDefaultLayoutFontScale;
- (void)updateLayoutFontScale;
- (void)setCornerRadius:(double)a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)createFansGroupBackView;
- (BOOL)shouldShowFansGroupBackView;
- (void)layoutFansGroupBackView;
- (void)layoutFansSignIconView;
- (void)layoutFansRankLabel;
- (void)updateFansRankLabelOrigin;
- (void)layoutFansSignLabel;
- (void)updateFansSignLabelOrigin;
- (void)layoutFansSignTailView;
- (void)updateFansSignTailHidden;
- (void)updateSelfSize;
- (void)updateUIForCurrentUIMode;
- (id)getSuperfanSignLabelColorInLightMode;
- (void)updateFansGroupBackViewImage;
- (void)updateSignLabelFontForCurrentUIStyle;
- (void)updateFansSignIconView;
- (void)updateFansRankLabel;
- (BOOL)needDisplayFansTail;
- (void)updateFansGroupText:(id)a0 checkEmpty:(BOOL)a1;
- (void)onLoadImageFail:(id)a0 extraInfo:(id)a1;
- (void)transferToState:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)getCurrentUIStateInfo;
- (void)refreshWithUIStateInfo:(id)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
