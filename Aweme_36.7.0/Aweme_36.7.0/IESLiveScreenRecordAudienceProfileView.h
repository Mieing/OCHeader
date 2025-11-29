@class UILabel;

@interface IESLiveScreenRecordAudienceProfileView : UIView

@property (retain, nonatomic) UILabel *nickName;
@property (retain, nonatomic) UILabel *displayID;

- (void)renderUser:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)containerView;
- (void)setupView;

@end
