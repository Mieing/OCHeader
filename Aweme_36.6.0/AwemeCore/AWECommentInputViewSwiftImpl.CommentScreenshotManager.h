@interface AWECommentInputViewSwiftImpl.CommentScreenshotManager : NSObject <AWEUserMessage, AWECommentScreenshotManagerProtocol> {
    void /* unknown type, empty encoding */ screenshotTime;
    void /* unknown type, empty encoding */ screenshotImage;
}

- (void)didFinishLogoutWithUid:(id)a0;
- (id)currentScreenshotImage;
- (id)currentScreenshotTime;
- (void)resetScreenshotTime;
- (void)resetScreenshotImage;
- (void)drawScreenshot;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
