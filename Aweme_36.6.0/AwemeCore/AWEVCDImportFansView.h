@class UIImageView, UILabel, UIView, UIButton;
@protocol AWEVCDImportFansViewDelegate;

@interface AWEVCDImportFansView : UIView

@property (retain, nonatomic) UIView *iconView;
@property (retain, nonatomic) UIImageView *douyinImageView;
@property (retain, nonatomic) UIImageView *hotsoonImageView;
@property (retain, nonatomic) UIImageView *closeArrowImageView;
@property (retain, nonatomic) UILabel *douyinLabel;
@property (retain, nonatomic) UILabel *hotsoonLabel;
@property (retain, nonatomic) UIView *seperateLine;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIButton *agreeButton;
@property (weak, nonatomic) id<AWEVCDImportFansViewDelegate> delegate;

- (void)configWithModel:(id)a0;
- (void)configUI;
- (void)agreeAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
