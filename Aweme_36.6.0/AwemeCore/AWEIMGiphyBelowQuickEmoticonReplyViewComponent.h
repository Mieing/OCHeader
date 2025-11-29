@class NSString;

@interface AWEIMGiphyBelowQuickEmoticonReplyViewComponent : AWEIMFlexComponent <AWEIMMessageListDataAction>

@property (nonatomic) BOOL didDismiss;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)p_checkCanShowWithMessageContext:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)didReceiveNewMessage:(id)a0 reason:(long long)a1;
- (void)p_createPresenterIfNeeded;
- (void)p_emoticonReplyChanged;
- (id)p_getRenderModelListWithMessage:(id)a0;
- (void)p_configPresenterWithRenderModelArray:(id)a0;
- (void)p_trackShowWithGiphyMessage:(id)a0 renderModels:(id)a1;
- (void)p_hideEmoticonReply;
- (void)p_unobserve;
- (void)p_didSelectedEmoticon:(id)a0;
- (void)p_hideEmoticonReplyWithoutAnimation;
- (void)p_trackDidClickWithModel:(id)a0;
- (id)currentMessage;

@end
