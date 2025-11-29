@class UIImageView, UILabel;
@protocol LSIMUserMsgFooterViewDelegate;

@interface LSIMUserMsgFooterView : UIView

@property (retain, nonatomic) UIImageView *alertImageView;
@property (retain, nonatomic) UILabel *statusLabel;
@property (nonatomic) unsigned long long status;
@property (weak, nonatomic) id<LSIMUserMsgFooterViewDelegate> delegate;

- (void)updateFooterStatus:(unsigned long long)a0;
- (void)footerViewDidTapped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end
