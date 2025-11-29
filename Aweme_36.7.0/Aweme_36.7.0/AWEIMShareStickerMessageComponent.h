@class NSString, AWEIMShareStickerMessage, AWEIMMessageConversation;

@interface AWEIMShareStickerMessageComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (retain, nonatomic) AWEIMShareStickerMessage *message;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_addKVO;
- (void)p_createPresenterIfNeed;
- (void)p_initProps;
- (void)coverTapped:(id)a0;
- (void)configShootSameButtonIfNeedWithMessage:(id)a0;
- (void)p_trackItemClickWithMessage:(id)a0 place:(id)a1;
- (void)checkUserSendPhotoPrivilegeWithCompletion:(id /* block */)a0;
- (void)postViewTapped:(id)a0;
- (void)p_trackShareStickerCellShow;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })contentSize;
- (id)displayMessage;

@end
