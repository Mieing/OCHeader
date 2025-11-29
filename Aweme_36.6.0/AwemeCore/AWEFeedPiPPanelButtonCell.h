@class DUXButton;

@interface AWEFeedPiPPanelButtonCell : AWEFeedPiPPanelCell

@property (retain, nonatomic) DUXButton *button;
@property (copy, nonatomic) id /* block */ buttonActionBlock;

- (id)initWithTitle:(id)a0 subTitle:(id)a1 buttonTitle:(id)a2 buttonActionBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (void)buttonAction;
- (void)setupUI;

@end
