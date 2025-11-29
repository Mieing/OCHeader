@class AWEButton;

@interface AWETeenVideoVoteView : AWEJudgeVideoView

@property (retain, nonatomic) AWEButton *closeButton;
@property (copy, nonatomic) id /* block */ closeBlock;

- (id)initWithTitle:(id)a0 actionTitle:(id)a1 cancelTitle:(id)a2;
- (void)updateAcceptAction:(BOOL)a0;
- (void)resetButtonStatus;
- (void)updateAcceptTitle:(id)a0;
- (void)updateCancelTitle:(id)a0;
- (void).cxx_destruct;
- (void)closeButtonTapped:(id)a0;
- (void)updateTitle:(id)a0;

@end
