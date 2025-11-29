@class AWEUserLoginProtocolModel, DYUserProtocolView;

@interface AWEUserLoginProtocolView : UIView

@property (retain, nonatomic) AWEUserLoginProtocolModel *model;
@property (retain, nonatomic) DYUserProtocolView *protocolView;

- (void)bindUI;
- (id)createDefaultProtocolView;
- (void)protocolViewEnabledChanged:(BOOL)a0;
- (void)viewDidAppear;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;
- (void)viewDidDisappear;

@end
