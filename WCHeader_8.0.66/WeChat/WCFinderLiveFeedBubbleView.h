@class WCFinderJumpInfo, NSString, FinderLiveNoticeInfo, WCFinderLiveNoticeCellViewModel, WCFinderFeedContentVM, UITapGestureRecognizer;

@interface WCFinderLiveFeedBubbleView : WCFinderFeedBubbleView <WCFinderJumpInfoViewProtocol>

@property (retain, nonatomic) FinderLiveNoticeInfo *noticeInfo;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (readonly, nonatomic) WCFinderJumpInfo *hotSpotJumpInfo;
@property (retain, nonatomic) WCFinderLiveNoticeCellViewModel *liveNoticeVM;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned long long operatingType;
@property (copy, nonatomic) id /* block */ onClickNoticeBlock;
@property (copy, nonatomic) id /* block */ onClickNoticeDetailBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onClickActionButton;
- (void)updateLiveFeedBubbleViewWithUsername:(id)a0 noticeInfo:(id)a1;
- (void)doLayout;
- (void)startExposeAction;
- (void)endExposeAction;
- (void)feedBubbleViewShowDetail:(id)a0;
- (void)updateActionButtonWhenFree;
- (id)timeStringWith:(id)a0;
- (void)updateLabelsForSingleLineStyleWith:(id)a0;
- (void)updateLabelsWith:(id)a0;
- (void)updateActionButtonWhenNeedPay;
- (void)updateActionButtonWhenNeedPayForSingleLineStyle;
- (void)updateWithJumpInfo:(id)a0 showPosition:(int)a1;
- (void)setMaxWidth:(double)a0 maxTextAreaWidth:(double)a1;
- (void).cxx_destruct;

@end
