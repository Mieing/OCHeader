@class WCFinderFeedStaticCoverView, SightIconView, UILabel, UIView, MMUIButton;
@protocol WCFinderHoriPreviewCardViewDelegate;

@interface WCFinderHoriPreviewCardView : MMUIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) MMUIButton *editButton;
@property (retain, nonatomic) UIView *voiceOverWrapperView;
@property (retain, nonatomic) WCFinderFeedStaticCoverView *coverView;
@property (retain, nonatomic) SightIconView *playIconView;
@property (nonatomic) unsigned long long style;
@property (weak, nonatomic) id<WCFinderHoriPreviewCardViewDelegate> delegate;

+ (id)getTitleTipsByStyle:(unsigned long long)a0;
+ (id)getDescTipsByStyle:(unsigned long long)a0;
+ (id)getCoverTitleTipsByStyle:(unsigned long long)a0;
+ (double)getCoverTargetHeightRatioByStyle:(unsigned long long)a0;
+ (double)getCoverWidHeightRatioByStyle:(unsigned long long)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(unsigned long long)a1;
- (void)updateCoverViewStyle:(unsigned long long)a0;
- (void)loadFromDataItem:(id)a0;
- (void)configureAccessibilityForCoverView;
- (void)layoutAllSubviews;
- (void)onClickEditBtn;
- (void).cxx_destruct;

@end
