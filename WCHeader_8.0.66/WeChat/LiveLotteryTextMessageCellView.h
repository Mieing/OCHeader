@class UIButton;

@interface LiveLotteryTextMessageCellView : TextMessageCellView {
    UIButton *m_sourceButton;
}

- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setViewModel:(id)a0;
- (BOOL)touchIntoSelectCopyState;
- (BOOL)canShowRevokeMsgMenuItem;
- (id)operationMenuItems;
- (void)layoutContentView;
- (void)initSourceLabel;
- (void)tagWeAppLotteryLink:(id)a0 messageWrap:(id)a1;
- (void)clickGiftWithAppInfo:(id)a0;
- (void)clickLotteryWithAppInfo:(id)a0;
- (void)reportClick:(unsigned long long)a0 audience:(int)a1 lotteryId:(id)a2;
- (void)audienceClickLotteryDetail:(id)a0 lotteryInfo:(id)a1 taskId:(id)a2 anchorNickName:(id)a3 objectId:(unsigned long long)a4 liveId:(unsigned long long)a5 lotteryType:(unsigned int)a6 couponRecordInfo:(id)a7 milestoneLotteryInfo:(id)a8;
- (void)anchorClickLotteryDetail:(id)a0 lotteryInfo:(id)a1 taskId:(id)a2;
- (void).cxx_destruct;

@end
