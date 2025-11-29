@class IESLivePublicScreenNodeStyleConfig, NSArray, NSSet, IESLivePSActionSheetPanelView, NSString, NSMutableArray, HTSLiveMsgOptPanel;
@protocol IESLiveNormalPublicScreenService;

@interface IESLivePublicScreenActionSheetService : IESLiveGeneralBaseService <IESLivePublicScreenActionSheetService, IESLiveMessageInteractionAssetUpdateAction>

@property (retain, nonatomic) NSMutableArray *registerItems;
@property (retain, nonatomic) HTSLiveMsgOptPanel *serverActionSheetInfo;
@property (copy, nonatomic) NSArray *supportMessageClass;
@property (copy, nonatomic) NSSet *itemInvalidSet;
@property (retain, nonatomic) IESLivePublicScreenNodeStyleConfig *nodeStyleConfig;
@property (retain, nonatomic) id<IESLiveNormalPublicScreenService> publicScreenService;
@property (retain, nonatomic) IESLivePSActionSheetPanelView *currentPanelView;
@property (copy, nonatomic) NSArray *currentShowItems;
@property (nonatomic) BOOL actionSheetPanelV2Enable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (id)serviceActionsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (void)dismissPanel;
- (void)publicScreenActionSheetInfoUpdate:(id)a0;
- (void)removeItemWithItemID:(unsigned long long)a0;
- (BOOL)openPSActionSheetWithNode:(id)a0;
- (struct CGSize { double x0; double x1; })currentActionSheetPanelSize;
- (void)logOpenActionSheetPanelSuccess:(BOOL)a0 reason:(id)a1;
- (id)panelViewModelWithItems:(id)a0 node:(id)a1;
- (void)showActionSheetPanelViewWithViewModel:(id)a0;
- (void)invokePanelItemShowBlockWithNode:(id)a0;
- (void)invokePanelItemDismissBlockWithNode:(id)a0;
- (void)dealWithSpecialItemIfNeededWithNode:(id)a0 topAreaItems:(id)a1 middleAreaItems:(id)a2 bottomAreaItems:(id)a3;
- (void)trackCommonActionSheetItemClickWithItem:(id)a0;
- (void)trackCommonActionSheetItemShowWithItem:(id)a0;
- (void).cxx_destruct;
- (void)updateItem:(id)a0;
- (void)registerItem:(id)a0;

@end
