@class NSString, UIImageView, UILabel, UIView;

@interface AWEConcernFansToolEntranceView : UIView <AWEConcernFansToolEntranceProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *yellowDot;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)create;

- (void)__addObservers;
- (void)__setupUI;
- (void)__addGestureRecognizer;
- (void)__updateTitleLabelMasonry;
- (void)__enterFansTool;
- (void)__removeYellowDot;
- (void)__fansToolDidEnter;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
