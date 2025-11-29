@class AWESearchAIGCDeepThinkViewModel, NSString, AWESearchAIGCDeepThinkViewStyleConfig, AWESearchAIGCDeepThinkNetModePopover, AWESearchAIGCDeepThinkItemView;
@protocol AWESearchAIGCDeepThinkViewDelegate;

@interface AWESearchAIGCDeepThinkView : UIView <AWESearchAIGCDeepThinkAction>

@property (weak, nonatomic) id<AWESearchAIGCDeepThinkViewDelegate> delegate;
@property (retain, nonatomic) AWESearchAIGCDeepThinkViewModel *viewModel;
@property (retain, nonatomic) AWESearchAIGCDeepThinkItemView *deepThinkSwitchView;
@property (retain, nonatomic) AWESearchAIGCDeepThinkItemView *netModeSwitchView;
@property (retain, nonatomic) AWESearchAIGCDeepThinkItemView *modelSelectView;
@property (retain, nonatomic) AWESearchAIGCDeepThinkNetModePopover *netModePopover;
@property (retain, nonatomic) AWESearchAIGCDeepThinkViewStyleConfig *styleConfig;
@property (readonly, nonatomic) struct CGSize { double width; double height; } viewSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchDeepThinkInTextMultiLine:(BOOL)a0;
- (id)deepThinkNetModeName;
- (BOOL)deepThinkIsOpen;
- (void)switchDeepThinkOpenMode:(BOOL)a0;
- (id)deepThinkModelName;
- (id)initWithDelegate:(id)a0 styleConfig:(id)a1;
- (struct CGSize { double x0; double x1; })layoutModelSelectView;
- (struct CGSize { double x0; double x1; })layoutDeepThinkSwitchView;
- (long long)deepThinkNetModeType;
- (void)interceptionLongPressGesture:(id)a0;
- (void)switchDeepThinkInputViewStateIsRevise:(BOOL)a0;
- (void)switchModelSelect:(id)a0 conversationID:(id)a1;
- (id)currentConversationMode:(id)a0;
- (void)saveModeForNewConversationID:(id)a0;
- (id)deepThinkPlaceholder;
- (void)globalModeViewTouched;
- (void)netModeViewTouched;
- (void)modelSelectViewTouched;
- (void)closeDeepThinkNetModePopover;
- (struct CGSize { double x0; double x1; })showOnlyIconSize;
- (void)hookHandleLongPressGesture;
- (id)modelSelectPlaceHolder;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)updateSubviews;

@end
