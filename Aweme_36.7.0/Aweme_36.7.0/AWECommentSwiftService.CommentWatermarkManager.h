@interface AWECommentSwiftService.CommentWatermarkManager : NSObject <AWEUserMessage, AWECommentWatermarkManagerProtocol> {
    void /* unknown type, empty encoding */ waterMarkImage;
    void /* unknown type, empty encoding */ lastResponse;
    void /* unknown type, empty encoding */ lastError;
    void /* unknown type, empty encoding */ imageLock;
    void /* unknown type, empty encoding */ subscribers;
}

- (void)userChangedFrom:(id)a0 to:(id)a1;
- (id)commentWatermarkImage;
- (void)obtainURLWithCompletion:(id /* block */)a0;
- (void)subscriberResponseWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
