@class UIView, NSString, WCFinderStaticCoverInfoView, WCFinderFeedImageCDNView, WCFinderDataItem, WCFinderLiveNowView, CAGradientLayer, WCFinderStaticCoverCollectionViewCellConfig, UILabel;
@protocol WCFinderLiveIconAnimationProtocol, WCFinderFeedStaticCoverViewProtocol;

@interface WCFinderFeedStaticCoverView : UIView <WCFinderFeedImageCDNViewDelegate, WCFinderLiveExt>

@property (retain, nonatomic) WCFinderFeedImageCDNView *coverImageView;
@property (retain, nonatomic) UIView<WCFinderLiveIconAnimationProtocol> *liveNowView;
@property (retain, nonatomic) WCFinderLiveNowView *liveEndView;
@property (nonatomic) unsigned long long topLeftType;
@property (retain, nonatomic) WCFinderStaticCoverCollectionViewCellConfig *config;
@property (nonatomic) int coverShowStyle;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) WCFinderStaticCoverInfoView *bottomLeftInfoView;
@property (retain, nonatomic) WCFinderStaticCoverInfoView *infoView;
@property (retain, nonatomic) UIView *infoBGView;
@property (retain, nonatomic) CAGradientLayer *infoBGLayer;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) WCFinderFeedImageCDNView *backGroundCoverView;
@property (retain, nonatomic) UIView *infoMaskView;
@property (retain, nonatomic) UILabel *liveCoverEffectLabel;
@property (weak, nonatomic) id<WCFinderFeedStaticCoverViewProtocol> delegate;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } customInfoViewInsets;
@property (copy, nonatomic) id /* block */ renderReporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowRedPacketItemWithDataItem:(id)a0 config:(id)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)updateTopLeftViewType:(unsigned long long)a0;
- (void)layoutGradientView;
- (void)setupLiveIconView;
- (void)prepareForReuse;
- (void)initSubviews;
- (void)adjustEndViewWith:(unsigned long long)a0;
- (void)updateContentWithDataItem:(id)a0 config:(id)a1 scene:(int)a2;
- (void)updateInfoViewWithRightItem:(id)a0 leftItem:(id)a1 config:(id)a2;
- (void)layoutBGInfoView;
- (id)infoLeftItemsForDataItem:(id)a0 config:(id)a1;
- (id)infoRightItemsForDataItem:(id)a0 config:(id)a1;
- (void)insertSubviewBelowInfoView:(id)a0;
- (void)layoutSubviews;
- (void)adjustMargin;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })displayInfoViewEdgeInsets;
- (void)addInfoViewGradientView;
- (void)addCoverBlurEffect;
- (void)removeCoverBlurEffect;
- (void)addCoverSpamEffect:(id)a0;
- (void)removeCoverSpamEffect;
- (void)updateCoverHeight:(double)a0;
- (void)updateCoverImageWithMediaWrap:(id)a0;
- (void)setLiveNowViewHidden:(BOOL)a0;
- (void)startLiveAnimation;
- (void)hiddenLiveNowView:(BOOL)a0;
- (id)getStrLiveNowViewShouldDisplay;
- (id)getLiveNowViewDisplayStr;
- (void)finderFeedImageLoadFinish;
- (void)reportCDNImageRenderCost:(unsigned long long)a0;
- (BOOL)isCoverLoaded;
- (void)updateInfoCoverMask;
- (void)onFinderLiveCloseWithTid:(id)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
