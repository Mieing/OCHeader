@class IESLivePSFloatSheetExpendPanelView, IESLivePSFloatSheetPanelView, NSArray, UITableViewCell, NSString, NSMutableDictionary, HTSLiveAudienceMsgOptPanel, HTSLiveMessageListNode, IESLivePSFloatSheetExpendPanelViewModel, IESLivePSFloatSheetItem;

@interface IESLivePublicScreenFloatSheetServiceImpl : IESLiveGeneralBaseService <IESLivePublicScreenFloatSheetService, IESLiveMessageInteractionAssetUpdateAction, IESLivePSFloatSheetDelegate>

@property (retain, nonatomic) NSMutableDictionary *registerItemsMap;
@property (copy, nonatomic) NSArray *supportMessageClass;
@property (retain, nonatomic) HTSLiveAudienceMsgOptPanel *msgOptPanel;
@property (nonatomic) BOOL commentInterflowOpened;
@property (retain, nonatomic) NSArray *floatSheetItems;
@property (retain, nonatomic) IESLivePSFloatSheetItem *morePanelItem;
@property (retain, nonatomic) IESLivePSFloatSheetPanelView *panelView;
@property (retain, nonatomic) IESLivePSFloatSheetExpendPanelView *expendPanelView;
@property (retain, nonatomic) IESLivePSFloatSheetExpendPanelViewModel *expendViewModel;
@property (weak, nonatomic) UITableViewCell *selectedMessageCell;
@property (weak, nonatomic) HTSLiveMessageListNode *node;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (id)serviceActionsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (void)refreshView;
- (void)publicScreenFloatSheetInfoUpdate:(id)a0;
- (BOOL)openFloatSheetWithNodeIfNeed:(id)a0 cell:(id)a1;
- (BOOL)enableOpenFloatSheetWithNode:(id)a0;
- (void)clickItem:(id)a0 node:(id)a1;
- (void)dealSpecialItemIfNeededWithNode:(id)a0 outsideItems:(id)a1 insideItems:(id)a2;
- (void)setMessageSelectedStyle:(BOOL)a0;
- (void)showFloatSheetWithViewModel:(id)a0;
- (void)updateRegisterItem;
- (BOOL)isCommentInterflow;
- (void)showExpendPanelView;
- (void).cxx_destruct;
- (void)registerItem:(id)a0;

@end
