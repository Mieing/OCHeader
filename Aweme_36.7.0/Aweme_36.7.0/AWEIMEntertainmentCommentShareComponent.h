@class NSString;

@interface AWEIMEntertainmentCommentShareComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (nonatomic) BOOL commentAvailable;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)enableShowQuotedCover:(id)a0;
+ (void)fetchQuotedMessageCover:(id)a0 context:(id)a1 completion:(id /* block */)a2;
+ (id)fetchQuotedMessageInvisibleStr:(id)a0 isLite:(BOOL)a1 context:(id)a2;
+ (void)onClickSharedComment:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)p_updateProps;
- (id)makeFeedCardProps;
- (struct CGSize { double x0; double x1; })calculateBubbleSize:(id)a0;
- (id)makeTopAttrStrWithMaxTextWidth:(double)a0;
- (BOOL)shouldShowCommentMediaView;
- (struct CGSize { double x0; double x1; })commentMediaSize;
- (id)entCommentShareMessage;
- (id)makeCommentAttrStr;
- (struct AWEIMFlexEdges { double x0; double x1; double x2; double x3; })bubbleEdges;
- (id)displayMessage;

@end
