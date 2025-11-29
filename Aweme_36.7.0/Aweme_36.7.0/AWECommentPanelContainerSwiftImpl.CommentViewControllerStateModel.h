@interface AWECommentPanelContainerSwiftImpl.CommentViewControllerStateModel : NSObject <AWECommentViewControllerStateProtocol> {
    void /* unknown type, empty encoding */ context;
}

@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isCommentVCFullScreen;
@property (nonatomic, readonly) BOOL isCommentPanelInputViewFullscreen;
@property (nonatomic) BOOL isSkipCommentPanelLifecycle;
@property (nonatomic) BOOL isCommentImageBrowsing;
@property (nonatomic, readonly) BOOL isDismissingToFullScreen;
@property (nonatomic, readonly) BOOL isPictureChoosing;

- (void).cxx_destruct;
- (id)init;

@end
