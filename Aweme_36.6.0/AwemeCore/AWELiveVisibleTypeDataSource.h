@class HTSEventContext, NSArray, BDXBridgeEventSubscriber, NSString, NSMutableArray;
@protocol AWELiveVisibleScopeListRouter;

@interface AWELiveVisibleTypeDataSource : NSObject <IESLiveGuidePaidVisibleEvent>

@property (nonatomic) unsigned long long panelType;
@property (retain, nonatomic) id<AWELiveVisibleScopeListRouter> visibleScopeListRouter;
@property (nonatomic) BOOL cancelPaidBySelectOther;
@property (retain, nonatomic) BDXBridgeEventSubscriber *vipPanelSubscriber;
@property (nonatomic) BOOL hasInvokePaidCallback;
@property (nonatomic) unsigned long long liveType;
@property (nonatomic) BOOL isVip;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ selectedCallback;
@property (copy, nonatomic) id /* block */ correctSelectCallback;
@property (retain, nonatomic) NSArray *paidSelectedUsers;
@property (nonatomic) BOOL isShowNotPreviewOption;
@property (nonatomic) BOOL isPaidOpenLiveNow;
@property (copy, nonatomic) id /* block */ selectedPaidCallback;
@property (nonatomic) unsigned long long paidVisibleType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackPanelShow;
- (void)changeGuidePaidLiveStatus:(BOOL)a0;
- (BOOL)isInPaidSelectionType:(unsigned long long)a0;
- (void)showToastWithType:(unsigned long long)a0;
- (double)generateDataSourcePaidPreview;
- (double)generateDataSourceNormal;
- (id)paidHintText;
- (void)addSubscribeVIPPanelFinishSetting:(id)a0;
- (void)saveSelectType:(unsigned long long)a0 realType:(int)a1;
- (void)trackItemSelectType:(unsigned long long)a0 model:(id)a1;
- (BOOL)shouldBlockSelectWithModel:(id)a0;
- (void)updateSelectedVisibleTypeModel:(id)a0 fromEditBtn:(BOOL)a1;
- (id)shortDesWithType:(unsigned long long)a0;
- (void)openUserSelectPageWithModel:(id)a0;
- (void)savePaidSelectModel:(id)a0 userList:(id)a1;
- (void)openPaidLivePanel;
- (void)openVIPLivePanel;
- (void)correctPanelView:(unsigned long long)a0 userList:(id)a1;
- (void)correctPaidPanelView:(unsigned long long)a0 userList:(id)a1;
- (void)trackSaveSelectType:(unsigned long long)a0 toast:(id)a1;
- (id)paidStubStringWithType:(unsigned long long)a0;
- (void)bindGuideAction;
- (double)generateDataSourceWithPanelType:(unsigned long long)a0;
- (void)didSelectVisibleTypeModel:(id)a0 fromEditBtn:(BOOL)a1;
- (id)userID;
- (void).cxx_destruct;
- (void)dealloc;

@end
