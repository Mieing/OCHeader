@class NSString, WCUserComment, WCImageMediaItemLoader;

@interface WCCommentRichTextView : RichTextView <ImageStyleDelegate>

@property (retain, nonatomic) WCImageMediaItemLoader *imageMediaItemLoader;
@property (retain, nonatomic) WCUserComment *userComment;
@property (retain, nonatomic) NSString *tid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)provideImageForStyle:(id)a0 handler:(id /* block */)a1;
- (id)loadingConfigForImageStyle:(id)a0 isRetry:(BOOL)a1;
- (id)generateCommentImageStyleLoadingConfig;
- (id)generateEmoticonThumbStyleLoadingConfig;
- (id)loadFailImg;
- (id)emoticonThumbLoadFailImg;
- (id)createImageViewWithSize:(struct CGSize { double x0; double x1; })a0 color:(id)a1;
- (id)loadingView;
- (BOOL)fetchCommentImageWithHandler:(id /* block */)a0;
- (id)emojiInfoForMd5:(id)a0;
- (void).cxx_destruct;

@end
