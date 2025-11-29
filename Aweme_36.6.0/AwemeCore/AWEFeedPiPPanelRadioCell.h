@class DUXRadioBox;

@interface AWEFeedPiPPanelRadioCell : AWEFeedPiPPanelCell

@property (copy, nonatomic) id /* block */ radioActionBlock;
@property (retain, nonatomic) DUXRadioBox *radioBox;

- (id)initWithTitle:(id)a0 subTitle:(id)a1 radioIsOn:(BOOL)a2 radioActionBlock:(id /* block */)a3;
- (void)radioAction;
- (void).cxx_destruct;
- (void)setupUI;

@end
