@class UIButton, AWEIMPhotoPickerFunctionModel;

@interface AWEIMPhotoPickerFunctionView : UIView

@property (retain, nonatomic) AWEIMPhotoPickerFunctionModel *model;
@property (retain, nonatomic) UIButton *actionButton;

- (void)setupObserver;
- (void)updateBtnTitleShadowWithBackground:(BOOL)a0;
- (void)onButtonPressed:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setupView;

@end
