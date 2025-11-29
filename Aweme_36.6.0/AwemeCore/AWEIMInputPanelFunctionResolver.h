@class NSArray, NSString;

@interface AWEIMInputPanelFunctionResolver : AWEIMComponentBase <AWEIMInputPanelFunctionResolverInterface>

@property (copy, nonatomic) NSArray *messageVCInputFuntions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowGroupVoipEntranceForConversation:(id)a0;
+ (Class)aAWEIMModuleServiceHTSAdaperClass;
+ (id)filteredInputVCFunctionsWithFunctions:(id)a0 byAuthorServiceFlag:(BOOL)a1;
+ (long long)p_maxConversationMemberLimitForGroupVoipEntranceShow;
+ (id)functionsInPreferredOrder;
+ (id)p_functionStringToEnumDic;
+ (id)inputVCPlusPanelFunctionsWithMessageVCInputFunctions:(id)a0 forConversation:(id)a1;
+ (BOOL)canShowIMSendPhotoFunction;
+ (BOOL)p_groupConversationIsValid:(id)a0;
+ (BOOL)p_shouldShowGroupVoipEntranceBySettings;
+ (BOOL)p_shouldShowGroupVoipEntranceByGroupMemmber:(id)a0;
+ (BOOL)isRTVEnableWithIsVideo:(BOOL)a0 forConversation:(id)a1;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (id)aAWEIMModuleServiceHTSAdaper;
- (BOOL)p_canShowInputPanelGameEntry;
- (BOOL)p_shouldShowWatchTogetherEntrance;
- (BOOL)p_shouldShowExchangeAnswerEntrance;
- (void).cxx_destruct;

@end
