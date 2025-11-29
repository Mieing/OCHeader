@class NSString, UIView;
@protocol WCFinderPostLinkActionSheetDelegate;

@interface WCFinderPostLinkActionSheet : WCActionSheet

@property (retain, nonatomic) UIView *tipsView;
@property (weak, nonatomic) id<WCFinderPostLinkActionSheetDelegate> m_delegate;
@property (nonatomic) long long linkFlag;
@property (nonatomic) int commentScene;
@property (retain, nonatomic) NSString *redPackageContentTips;
@property (nonatomic) unsigned long long enterScene;
@property (copy, nonatomic) NSString *finderPostSessionid;

- (double)heightOfWholeSheet;
- (double)getCustomView:(double)a0;
- (id)getTipsActionSheetView;
- (void)bindReportViewFrom:(id)a0 eid:(id)a1;
- (void)onClickCloseBtn;
- (void)onClickWxArticleAction;
- (void)onClickRedEnvelopeAction;
- (void)onClickTxspAction;
- (void)onClickMiniGameAction;
- (void)onClickDramaAction;
- (void)onClickStickerAction;
- (void)onClickShopAction;
- (void)onClickMembershipAction;
- (void)onClickTingMusicAction;
- (void)onClickTingAudioAction;
- (void).cxx_destruct;

@end
