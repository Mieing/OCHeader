@class FinderLiveNoticeInfo;

@interface MMFinderReserveLiveNoticeTipsBubbleView : MMFinderLiveBottomRightBubbleView

@property (copy, nonatomic) id /* block */ closeAction;
@property (copy, nonatomic) id /* block */ confirmAction;
@property (retain, nonatomic) FinderLiveNoticeInfo *noticeInfo;

- (id)initWithTaskId:(id)a0 noticeInfo:(id)a1 closeAction:(id /* block */)a2 confirmAction:(id /* block */)a3;
- (void)onCloseTapped;
- (void)updateActionButton;
- (void)onActionTapped;
- (void)updateTitleLabel;
- (void)onFinderLiveNoticeWithNoticeId:(id)a0 reserveStateChanged:(unsigned long long)a1;
- (void).cxx_destruct;

@end
