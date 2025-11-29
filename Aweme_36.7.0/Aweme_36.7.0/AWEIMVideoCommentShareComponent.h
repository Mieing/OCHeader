@class NSString;

@interface AWEIMVideoCommentShareComponent : AWEIMFlexComponent <AWEIMFeedVideoMsgUnavailableStatusUpdatesObserver, AWEIMMessageContentInterface>

@property (nonatomic) BOOL commentAvailable;
@property (nonatomic) BOOL awemeAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long scene;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)enableShowQuotedCover:(id)a0;
+ (void)fetchQuotedMessageCover:(id)a0 context:(id)a1 completion:(id /* block */)a2;
+ (id)fetchQuotedMessageInvisibleStr:(id)a0 isLite:(BOOL)a1 context:(id)a2;
+ (void)onClickSharedComment:(id)a0 context:(id)a1 transitionFromView:(id)a2;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellVisibleLifeCycleChanged:(unsigned long long)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_updateProps;
- (void)didUpdateUnavailableStatusForMessage:(id)a0;
- (void)didUpdateContentTitleForMessage:(id)a0 itemID:(id)a1;
- (void)didEditContentTitleForMessage:(id)a0;
- (id)makeFeedCardProps;
- (struct CGSize { double x0; double x1; })calculateBubbleSize:(id)a0;
- (id)makeTopAttrStrWithMaxTextWidth:(double)a0;
- (BOOL)shouldShowCommentMediaView;
- (struct CGSize { double x0; double x1; })commentMediaSize;
- (void)onClickSharedComment;
- (id)makeCommentAttrStr;
- (struct AWEIMFlexEdges { double x0; double x1; double x2; double x3; })bubbleEdges;
- (id)videoCommentMessage;
- (id)displayMessage;
- (void)dealloc;

@end
