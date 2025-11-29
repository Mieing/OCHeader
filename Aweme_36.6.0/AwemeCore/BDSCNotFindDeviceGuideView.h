@class NSString, BDSCImageView, BDSCNewNotFindNotiView;

@interface BDSCNotFindDeviceGuideView : UIView

@property (retain, nonatomic) BDSCImageView *tipsImageView;
@property (retain, nonatomic) BDSCNewNotFindNotiView *notFindNotiTipsView;
@property (copy, nonatomic) NSString *imageName;
@property (nonatomic) BOOL isLandscape;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 imageName:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
