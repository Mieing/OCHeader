@class CameraScanTabView, UILabel, UIView, UIButton;
@protocol CameraScanBaseContentViewDelegate;

@interface CameraScanBaseContentView : MMUIView

@property (weak, nonatomic) id<CameraScanBaseContentViewDelegate> delegate;
@property (retain, nonatomic) UILabel *centerLabel;
@property (weak, nonatomic) UIButton *closeButton;
@property (weak, nonatomic) UILabel *infoLabel;
@property (weak, nonatomic) UIButton *torchButton;
@property (weak, nonatomic) UILabel *torchLabel;
@property (weak, nonatomic) UIView *albumButtonWrapView;
@property (weak, nonatomic) CameraScanTabView *tabView;

- (id)init;
- (void)setupCenterLabel:(id)a0;
- (void)setCenterLabelHidden:(BOOL)a0 bAnim:(BOOL)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })areaSizeAboveTabView;
- (struct CGPoint { double x0; double x1; })areaCenterAboveTabView;
- (double)getTabViewHeight;
- (void).cxx_destruct;

@end
