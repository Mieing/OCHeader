@class AWEIMExchangeAlbumRandomViewModel, UILabel, AWEIMExchangeCameraTitleViewModel, UIButton;
@protocol AFDMomentCameraFlowService;

@interface AWEIMExchangeCameraTitleComponent : AFDMomentCameraBaseComponent

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *titleButton;
@property (retain, nonatomic) id<AFDMomentCameraFlowService> flowService;
@property (retain, nonatomic) AWEIMExchangeCameraTitleViewModel *viewModel;
@property (retain, nonatomic) AWEIMExchangeAlbumRandomViewModel *randomViewModel;

- (void)bindObserver;
- (void)componentDidLoad;
- (void)p_setTitle;
- (id)p_getAttributedTextWithText:(id)a0;
- (void).cxx_destruct;

@end
