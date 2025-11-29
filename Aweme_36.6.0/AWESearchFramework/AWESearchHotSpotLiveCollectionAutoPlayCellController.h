@class AWESearchLivePayOverlayView, UIImageView, AWEGeneralSearchModel, UILabel;

@interface AWESearchHotSpotLiveCollectionAutoPlayCellController : AWESearchLiveAutoPlayViewController {
    AWESearchLivePayOverlayView *_payOverlayView;
}

@property (retain, nonatomic) UIImageView *shadowImageView1;
@property (retain, nonatomic) UIImageView *shadowImageView2;
@property (retain, nonatomic) UILabel *hotSpotInfoLabel;
@property (retain, nonatomic) AWEGeneralSearchModel *searchModel;

- (void)setLogExtraDict:(id)a0;
- (void)cellWillDisplay;
- (void)player:(id)a0 mediaSizeDidChange:(struct CGSize { double x0; double x1; })a1;
- (void)setupSubViews;
- (id)payOverlayView;
- (void)setPayOverlayView:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
