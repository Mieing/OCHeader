@class NSString;

@interface AWESearchAIGCDeepThinkViewModel : NSObject <AWESearchAIGCDeepThinkAction>

@property (readonly, nonatomic) BOOL showDeepThinkTitle;
@property (readonly, nonatomic) BOOL showNetMode;
@property (readonly, nonatomic) BOOL showDeepThinkMode;
@property (nonatomic) BOOL hasShownDeepThinkView;
@property (nonatomic) BOOL hasShownNetModeView;
@property (nonatomic) BOOL hasShownNetModePanelView;
@property (nonatomic) BOOL hasShowModeSelectView;
@property (nonatomic) BOOL isMultiLine;
@property (readonly, nonatomic) long long modelType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateShowState;
- (void)switchDeepThinkInTextMultiLine:(BOOL)a0;
- (id)deepThinkNetModeName;
- (BOOL)deepThinkIsOpen;
- (void)switchDeepThinkOpenMode:(BOOL)a0;
- (id)deepThinkModelName;
- (id)netModeList;
- (id)deepThinkTitle;
- (id)deepThinkIcon;
- (id)modelSelectTitle:(id)a0;
- (long long)deepThinkNetModeType;
- (void)switchDeepThinkNetModeType:(long long)a0;
- (void)switchDeepThinkInputViewStateIsRevise:(BOOL)a0;
- (void)switchModelSelect:(id)a0 conversationID:(id)a1;
- (id)currentConversationMode:(id)a0;
- (void)saveModeForNewConversationID:(id)a0;
- (id)deepThinkPlaceholder;
- (id)modelSelectPlaceHolder:(id)a0;
- (id)init;

@end
