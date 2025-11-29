@class NSString, NSObject;
@protocol AWEIMCardBelowQuickEmoticonReplyComponent;

@interface AWEIMCardBelowQuickEmoticonReplyViewComponent : AWEIMFlexComponent <AWEIMMessageBulletAction, AWEIMMessageEmoticonReplyAction>

@property (weak, nonatomic) NSObject<AWEIMCardBelowQuickEmoticonReplyComponent> *replyComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_trackShow;
- (void)bulletContainerDidUpdateSize:(struct CGSize { double x0; double x1; })a0;
- (void)p_createPresenter;
- (void)activeChangeEmoticonReply;
- (void)p_updateWithRenderModels:(id)a0 needReload:(BOOL)a1;
- (void)p_emoticonReplyChanged;
- (struct AWEIMCardBelowSendMessageStruct { id x0; id x1; })p_createTextMessageWithContent:(id)a0 quoteReplyMessage:(id)a1;
- (void).cxx_destruct;

@end
