@class UILabel;
@protocol IESLLGDQualificationViewDelegate;

@interface IESLLGDQualificationView : UIView

@property (retain, nonatomic) UILabel *descLabel;
@property (weak, nonatomic) id<IESLLGDQualificationViewDelegate> delegate;

- (void)configWithQualificationModel:(id)a0;
- (void)didTapQualificationView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)handleTap:(id)a0;

@end
