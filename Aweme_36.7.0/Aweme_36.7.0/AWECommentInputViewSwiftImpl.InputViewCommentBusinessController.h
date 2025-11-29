@interface AWECommentInputViewSwiftImpl.InputViewCommentBusinessController : NSObject <AWEInputViewCommentControllerProtocol> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ dispatcher;
}

- (void)clearAllInputContent;
- (void)recoverInputContent:(id)a0;
- (void)recoverInputContentWithComment:(id)a0 businessExtra:(id)a1;
- (void)recoverImageContentWithImageURLs:(id)a0 businessExtra:(id)a1;
- (id)obtainMediaCoverImage:(id)a0;
- (id)obtainCurrentMediaCoverImage;
- (void)recoverVisibleInputContent:(id)a0;
- (id)inputMediaContentDesc;
- (id)inputContentValue;
- (void)recoverInputValue:(id)a0 textExtras:(id)a1;
- (void)stopInput;
- (void)showAccessoryView:(BOOL)a0;
- (id)publishCommentParamsForServer;
- (void)recoverDataCheck;
- (void).cxx_destruct;
- (id)init;
- (id)plainText;
- (void)refreshContent;

@end
