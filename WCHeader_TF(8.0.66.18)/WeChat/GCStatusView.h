@class NSString, UILabel, MMWebImageView;

@interface GCStatusView : UIView

@property (retain, nonatomic) MMWebImageView *stateIconView;
@property (retain, nonatomic) NSString *statusDesc;
@property (retain, nonatomic) NSString *fixedStatusDesc;
@property (retain, nonatomic) UILabel *statusLabel;
@property (nonatomic) struct CGSize { double width; double height; } initSize;
@property (nonatomic) BOOL isPureText;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureBgColor:(id)a0 imgUrl:(id)a1 statusDesc:(id)a2 needFold:(BOOL)a3 needAnimation:(BOOL)a4;
- (void)playAnimation;
- (void)configureFoldStatus:(BOOL)a0;
- (void)hideStatusLabel;
- (double)leftMarginForTextStatus;
- (void).cxx_destruct;

@end
