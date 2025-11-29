@class UILabel, UIView;

@interface BDPNovelEndingView : UIView

@property (retain, nonatomic) UILabel *endingText;
@property (retain, nonatomic) UIView *leftLine;
@property (retain, nonatomic) UIView *rightLine;

- (void)showWithEndingStr:(id)a0 fontColor:(id)a1 fontSize:(long long)a2 bottomOffset:(double)a3;
- (void).cxx_destruct;

@end
