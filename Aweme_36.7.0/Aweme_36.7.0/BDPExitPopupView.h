@class BDPModel;

@interface BDPExitPopupView : UIView

@property (retain, nonatomic) BDPModel *model;
@property (copy, nonatomic) id /* block */ exitAction;
@property (copy, nonatomic) id /* block */ addToDesktopAction;
@property (copy, nonatomic) id /* block */ closeAction;

- (void)clickCloseButton;
- (void)clickExitButton;
- (void)clickAddToDesktopButton;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)prepareLayout;
- (void)setupUI;

@end
