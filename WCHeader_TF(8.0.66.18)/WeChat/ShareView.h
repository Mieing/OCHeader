@class UILabel;
@protocol ShareViewDelegate, NSObject;

@interface ShareView : UIView

@property (weak, nonatomic) id<ShareViewDelegate, NSObject> delegate;
@property (retain, nonatomic) UILabel *shareLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)onClickShareLabel;
- (void).cxx_destruct;

@end
