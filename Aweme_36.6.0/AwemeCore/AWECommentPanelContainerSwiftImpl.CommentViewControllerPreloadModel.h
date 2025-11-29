@interface AWECommentPanelContainerSwiftImpl.CommentViewControllerPreloadModel : NSObject <AWECommentViewControllerPreloadProtocol> {
    void /* unknown type, empty encoding */ context;
}

@property (nonatomic) double commentButtonClickTime;
@property (nonatomic) BOOL isNeedPreload;
@property (nonatomic) BOOL isWaitingDelay;
@property (nonatomic) float preloadThreshold;
@property (nonatomic, readonly) BOOL preloadCommentsDiscarded;
@property (nonatomic, readonly) BOOL isHasCommentData;
@property (nonatomic) double entranceDidActivityStartTime;

- (void)preloadComments;
- (void).cxx_destruct;
- (id)init;

@end
