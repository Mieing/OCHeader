@class NSMutableArray;

@interface BDPExitPopupTaskNoticeView : UIView

@property (retain, nonatomic) NSMutableArray *tapGestureList;
@property (copy, nonatomic) id /* block */ exitAction;
@property (copy, nonatomic) id /* block */ continueAction;

- (void)onContinueBtnClick;
- (void)onExitBtnClick;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
