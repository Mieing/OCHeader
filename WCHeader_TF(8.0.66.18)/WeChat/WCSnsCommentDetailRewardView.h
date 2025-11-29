@class WCDataItem, UIView;
@protocol ILinkEventExt;

@interface WCSnsCommentDetailRewardView : MMUIView {
    UIView *_rewardTipView;
    UIView *m_lineView;
    UIView *m_rewardContainer;
    id<ILinkEventExt> m_urlDelegate;
    WCDataItem *_dataItem;
}

+ (double)getCommentViewLeftMarginCurOri;
+ (id)getNickNameForDataItem:(id)a0;

- (id)initWithUrlDelegate:(id)a0;
- (void)setDataItem:(id)a0;
- (void)initView;
- (void)initRewardContainer;
- (void)initLineView;
- (void)initRewardTipView;
- (void)rewardDetailViewTapped;
- (BOOL)isShowRewardContainer;
- (void).cxx_destruct;

@end
