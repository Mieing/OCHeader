@class AWEIMHotSpotCommentShareMessage, AWEIMMessageConversation, AWEIMHotSpotCommentShareTableViewCellViewModel, NSString;

@interface AWEIMHotSpotCommentShareMessageComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (retain, nonatomic) AWEIMHotSpotCommentShareMessage *message;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) AWEIMHotSpotCommentShareTableViewCellViewModel *cellViewModel;
@property (nonatomic) double lastUpdateTime;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_didTapContainer;
- (void)p_createPresenterIfNeed;
- (void)p_initProps;
- (void).cxx_destruct;
- (void)refresh;
- (struct CGSize { double x0; double x1; })contentSize;
- (id)displayMessage;
- (void)handleTapGesture:(id)a0;

@end
