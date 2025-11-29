@class UIImageView, UILabel, UIView;

@interface AWEVideoProductLimitedFreeReserveView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *reserveImageView;
@property (retain, nonatomic) UILabel *contentLabel;

- (void)makeConstraint;
- (void)setReserveViewWithURLArray:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (void)setContentText:(id)a0;

@end
