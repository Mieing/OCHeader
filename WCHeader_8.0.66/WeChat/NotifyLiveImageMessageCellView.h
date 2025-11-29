@class FinderNotifyGetMoreLiveResponse, NSString, UIView, MMLiveCDNPlayerView, WCFinderDataItem, FinderNotifyMoreLiveInfo, BrandTemplateMsgAuthMessageBubbleModel, MMUIButton, FinderLiveMessageCellMainContentView;

@interface NotifyLiveImageMessageCellView : TemplateNotifyMessageCellView <MMLiveCDNPlayerViewDelegate, MMFinderLiveContentVMExt, MMFinderNotifyGetMoreLiveEvents> {
    FinderLiveMessageCellMainContentView *m_mainContentView;
    MMLiveCDNPlayerView *m_playerView;
    WCFinderDataItem *m_finderDataItem;
}

@property (retain, nonatomic) UIView *onPressedView;
@property (retain, nonatomic) FinderNotifyGetMoreLiveResponse *moreLiveInfo;
@property (retain, nonatomic) FinderNotifyMoreLiveInfo *moreLiveConfig;
@property (retain, nonatomic) MMUIButton *moreLiveButton;
@property (retain, nonatomic) BrandTemplateMsgAuthMessageBubbleModel *messageBubbleModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)setViewModel:(id)a0;
- (void)onAppear;
- (void)dealloc;
- (void)prepareForReuse;
- (void)layoutContentView;
- (void)onTouchUpInside;
- (void)onMoreButton:(id)a0;
- (id)genDisplayViewWithExtItemInfo:(id)a0 maxDisplayViewWidth:(double)a1;
- (void)onTapMoreLiveButton;
- (void)onTouchDown;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)bindYReportSdk:(id)a0;
- (void)onLiveInfoUpdated;
- (void)updateLiveStatus;
- (BOOL)canAutoPlayVideoWithoutSound;
- (void)autoPauseVideoWithoutSound;
- (void)autoPlayVideoWithoutSound;
- (void)fetchLatestLiveInfo;
- (void)createLivePlayerIfNeed;
- (void)layoutLivePlayerView;
- (void)startPlayLiveStream;
- (void)stopPlay;
- (BOOL)hasMoreLiveConfig;
- (id)genFinderDataItem;
- (id)operationMenuItems;
- (void)onForward:(id)a0;
- (void)onDoneForwardMessageWithContentVM:(id)a0 andUserArray:(id)a1 isCertificateType:(BOOL)a2;
- (void)onMoreLiveConfigReadyWithUniqueKey:(id)a0;
- (void)reportMoreLiveEntranceExpose;
- (void)reportMoreLiveRecommendLiveExpose;
- (void)reportMoreLiveClick;
- (id)getMoreLiveDataItemForReport;
- (id)getChnlExtraForNoticeReport;
- (id)getChnlExtraForExposeReport;
- (void)fillMessageBubbleModeBaseInfo;
- (void)reportMessageBubbleOperationType:(unsigned int)a0;
- (void)reportLiveShareActionWithEid:(id)a0 isExpose:(BOOL)a1;
- (BOOL)updateRecommendReasonIfNeeded:(id)a0;
- (BOOL)cleanRecommendReasonIfNeeded;
- (BOOL)setRecommendReason:(id)a0;
- (void)onDisappear;
- (void)onAppEnterBackground;
- (BOOL)isListDragging;
- (void)MMUIViewControllerDidDisappear:(id)a0;
- (BOOL)isAutoPlaying;
- (void)reportReaderTemplateMsgFold:(long long)a0;
- (void).cxx_destruct;

@end
