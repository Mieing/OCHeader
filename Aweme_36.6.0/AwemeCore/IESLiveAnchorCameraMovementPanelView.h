@class UIStackView, IESLiveWebpLoadingView, IESLiveBeautyCommonDetailViewV2, NSString, UIView, UILabel, UIButton;
@protocol IESLiveAnchorCameraMovementViewDataSource, IESLiveAnchorCameraMovementViewDelegate;

@interface IESLiveAnchorCameraMovementPanelView : UIView <IESLiveBeautyDetailCommonViewDataSource, IESLiveBeautyCommonDetailViewDelegate, IESLiveAnchorCameraMovementPanelViewProtocol>

@property (retain, nonatomic) UIStackView *adjustViewContainer;
@property (retain, nonatomic) UIView *backgroundContainer;
@property (retain, nonatomic) UIButton *clearButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;
@property (retain, nonatomic) IESLiveBeautyCommonDetailViewV2 *detailItemView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLiveAnchorCameraMovementViewDataSource> dataSource;
@property (weak, nonatomic) id<IESLiveAnchorCameraMovementViewDelegate> delegate;

- (void)removeLoadingView;
- (void)setupBackgroundContainer;
- (void)setupAdjustViewContainer;
- (void)clearButtonDidTapped;
- (id)dataForDetailView:(id)a0;
- (void)detailView:(id)a0 didSelectItem:(id)a1 index:(id)a2 subIndex:(id)a3;
- (void)detailView:(id)a0 willDisplayItem:(id)a1 index:(id)a2 subIndex:(id)a3;
- (void)updateIndex:(long long)a0 item:(id)a1;
- (void)updateSliderViewWithConfig:(id)a0;
- (void)startDownloadAnimation:(long long)a0;
- (void)updateDownloadingProgress:(double)a0 index:(long long)a1;
- (void)endDownloadAnimation:(long long)a0;
- (void).cxx_destruct;
- (void)reload;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)addLoadingView;

@end
