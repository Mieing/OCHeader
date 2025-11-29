@class AWEGDImageRateContentView, UIView, AWEGDImageRateErrorView, NSString, AWEGDBussneissModel, AWEGDImageRateSkeletonView, AWEGDImageItemModel, AWEGradientView, CAGradientLayer, UIImageView, AWEGDRateFeedRawData, BDXBridgeEventSubscriber;

@interface AWEGDImageRateCell : UIView <AWEGDImageRateStateProtocol>

@property (retain, nonatomic) AWEGDBussneissModel *businessData;
@property (retain, nonatomic) AWEGDRateFeedRawData *feedRawData;
@property (retain, nonatomic) AWEGDImageItemModel *data;
@property (retain, nonatomic) AWEGDImageRateSkeletonView *skeletonView;
@property (retain, nonatomic) AWEGDImageRateErrorView *errorView;
@property (retain, nonatomic) AWEGDImageRateContentView *rateView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) BOOL hasUpdateFullScreen;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (copy, nonatomic) id /* block */ trackEventBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onClickAction;
- (void)bindClickAction;
- (void)updateCellData:(id)a0 businessData:(id)a1;
- (void)updateScreenStatus:(BOOL)a0;
- (void)setupConstrains;
- (id)getTopRateIds:(id)a0;
- (void)trackClickCommentView:(id)a0;
- (void)updateMarginTop;
- (void)didChangeToErrorState;
- (void)didChangeToLoadingState;
- (void)didReceiveRateData:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)topMargin;
- (void)setupUI;
- (void)setupContentView;

@end
