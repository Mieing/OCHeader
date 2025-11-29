@interface AWECommentMediaFeedSwfitImpl.CommentMediaFeedViewControllerEventListener : NSObject <AWECommentMediaFeedViewControllerEventListenerProtocol> {
    void /* function */ updateInputMediaModels;
    void /* function */ updateMediaContent;
    void /* function */ cellEndDisplay;
    void /* function */ currentIndexChanged;
    void /* function */ viewWillAppear;
    void /* function */ viewDidDisappear;
    void /* function */ viewWillDisappear;
    void /* function */ viewWillBePoped;
    void /* function */ didLikeComment;
    void /* function */ didSendComment;
    void /* function */ didDeleteComment;
    void /* function */ didExposeComment;
    void /* function */ didLongPressComment;
}

@property (nonatomic, copy) id /* block */ updateInputMediaModels;
@property (nonatomic, copy) id /* block */ updateMediaContent;
@property (nonatomic, copy) id /* block */ cellEndDisplay;
@property (nonatomic, copy) id /* block */ currentIndexChanged;
@property (nonatomic, copy) id /* block */ viewWillAppear;
@property (nonatomic, copy) id /* block */ viewDidDisappear;
@property (nonatomic, copy) id /* block */ viewWillDisappear;
@property (nonatomic, copy) id /* block */ viewWillBePoped;
@property (nonatomic, copy) id /* block */ didLikeComment;
@property (nonatomic, copy) id /* block */ didSendComment;
@property (nonatomic, copy) id /* block */ didDeleteComment;
@property (nonatomic, copy) id /* block */ didExposeComment;
@property (nonatomic, copy) id /* block */ didLongPressComment;

- (void).cxx_destruct;
- (id)init;

@end
