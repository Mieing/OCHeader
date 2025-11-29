@class NSDictionary;
@protocol AWEInteractionElementPopoverProtocol;

@interface AWECommentSwiftImpl.CommentGlobalUniqueInstance : NSObject <AWECommentGlobalUniqueInstanceProtocol> {
    void /* unknown type, empty encoding */ showSubTabPopOver;
    void /* unknown type, empty encoding */ commentPostCommonParams;
    void /* function */ zeroCommentPostTrackParams;
    void /* unknown type, empty encoding */ panelReuseViewPoolManager;
    void /* unknown type, empty encoding */ commentFeedInteractionTrackParams;
    void /* unknown type, empty encoding */ commentMediaFeedTrackExtraParamsManagerCount;
    void /* unknown type, empty encoding */ detailBottomInputViewIsShowing;
    void /* unknown type, empty encoding */ debugMonitorMap;
    void /* unknown type, empty encoding */ debugDidTriggleAlter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dateFormatterForMD;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dateFormatterForLineMD;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dateFormatterForYMD;
    void /* unknown type, empty encoding */ $__lazy_storage_$_commentTracker;
    void /* unknown type, empty encoding */ $__lazy_storage_$_inputCacheManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_screenshotMgr;
    void /* unknown type, empty encoding */ postCommentDict;
    void /* unknown type, empty encoding */ imagePreviewDurationAllFlow;
    void /* unknown type, empty encoding */ videoPreviewDurationAllFlow;
    void /* unknown type, empty encoding */ pushAwemeIds;
    void /* unknown type, empty encoding */ commetPushGuideLock;
}

@property (nonatomic, copy) NSDictionary *zeroCommentPostTrackParams;
@property (nonatomic) BOOL commentTemplateTabWillApproachSkipVideoPausePage;
@property (nonatomic, retain) id<AWEInteractionElementPopoverProtocol> interactionElementPopoverInstance;
@property (nonatomic) double multiImageInnerSlideStartStamp;
@property (nonatomic) long long multiImageInnerSlideCnt;

- (void)pushComment:(id)a0 withItemID:(id)a1;
- (void)trackPostComment:(id)a0;
- (id)popCommentWithItemID:(id)a0;
- (id)inputContentForItemID:(id)a0 commentID:(id)a1;
- (void)setInputContent:(id)a0 forItemID:(id)a1 commentID:(id)a2;
- (void)removeInputContentForItemID:(id)a0 commentID:(id)a1;
- (void)drawScreenshot;
- (id)obtainCommentPostCommonParams;
- (id)obtainCommentMediaFeedTrackParams;
- (id)commentMediaFeedInteractionTrackParams:(id)a0;
- (void)clearCommentPostCommonParams;
- (void).cxx_destruct;
- (id)init;
- (id)screenshotManager;
- (void)dealloc;

@end
