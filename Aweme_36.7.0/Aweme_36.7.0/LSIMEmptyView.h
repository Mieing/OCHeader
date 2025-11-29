@class UIButton, NSString, UIImageView, UIImage, UILabel, YYLabel;
@protocol LSIMEmptyViewDelegate;

@interface LSIMEmptyView : UIView

@property (readonly, nonatomic) UIImageView *iconImageView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) YYLabel *infoLabel;
@property (readonly, nonatomic) UIButton *actionBtn;
@property (readonly, nonatomic) UIButton *guideBtn;
@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *infoText;
@property (copy, nonatomic) NSString *actionText;
@property (copy, nonatomic) NSString *guideText;
@property (weak, nonatomic) id<LSIMEmptyViewDelegate> delegate;

- (void)btnClicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
