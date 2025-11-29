@class NSString, NSDictionary;

@interface AWEIMMessageQuoteReplyComponent : AWEIMFlexComponent

@property (nonatomic) long long lastStatus;
@property (nonatomic) BOOL lastWatchEndFlag;
@property (retain, nonatomic) NSString *showName;
@property (retain, nonatomic) NSDictionary *hintDict;
@property (nonatomic) BOOL hasLoadHintDict;
@property (nonatomic) BOOL hasFetchNickName;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)onCellWillRenderForCurrentComponent;
- (id)quoteReplyHintWithMesasge:(id)a0;
- (BOOL)p_isPublishMessageScene;
- (BOOL)p_isCombineShareScene;
- (void)p_didClickQuoteReply;
- (void)p_updateLabelProps;
- (void)p_quoteReplyHintWithUnavaliableMesasge:(id)a0;
- (void)p_showMessageDetailInCombineShare;
- (id)hintWithMessage:(id)a0;
- (id)p_content;
- (id)p_makeShowNameWithMessage:(id)a0;
- (void)p_fetchNickNameWithUid:(id)a0 message:(id)a1;
- (id)p_nickNameInHintDict;
- (void).cxx_destruct;

@end
