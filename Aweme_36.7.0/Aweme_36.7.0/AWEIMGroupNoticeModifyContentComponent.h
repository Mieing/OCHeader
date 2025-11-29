@class NSString, AWEIMGroupNoticeModifyMessage, AWEIMMessageConversation;

@interface AWEIMGroupNoticeModifyContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (retain, nonatomic) AWEIMGroupNoticeModifyMessage *message;
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
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })bubbleContentPaddingInsets;
- (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
- (void)p_createPresenterIfNeed;
- (void)p_initProps;
- (struct CGSize { double x0; double x1; })contentSizeWithMessage:(id)a0 maxWidth:(double)a1;
- (void)p_initColorProps;
- (void)p_tapAction:(id)a0 content:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void).cxx_destruct;
- (id)displayMessage;

@end
