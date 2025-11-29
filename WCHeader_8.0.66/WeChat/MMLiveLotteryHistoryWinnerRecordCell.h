@class UIButton;

@interface MMLiveLotteryHistoryWinnerRecordCell : MMLiveLotteryWinnerRecordCell

@property (retain, nonatomic) UIButton *finderChatButton;
@property (nonatomic) BOOL enableToChat;
@property (copy, nonatomic) id /* block */ chatButtonClickBlock;

+ (double)seperateLineLeftMargin;

- (double)lotteryWinnerRecordCellInnerPadding;
- (double)lotteryWinnerRecordHeadImageViewRightMargin;
- (void)layoutUI;
- (void)initHeaderImageView;
- (void)initNameLabel;
- (void)layoutFinderChatButton;
- (void)onLotteryFinderChatButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
