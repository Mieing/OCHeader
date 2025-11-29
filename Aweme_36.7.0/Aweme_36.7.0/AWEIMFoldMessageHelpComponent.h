@class AWEIMMessage;

@interface AWEIMFoldMessageHelpComponent : AWEIMFlexComponent

@property (nonatomic) long long foldMsgType;
@property (retain, nonatomic) AWEIMMessage *displayMessage;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)p_createPresenterIfNeed;
- (void)p_tapAction;
- (void)p_prepareProps;
- (void)p_tryShowRiskTips;
- (id)p_parseRiskTpsModelFromMessage:(id)a0;
- (void).cxx_destruct;

@end
