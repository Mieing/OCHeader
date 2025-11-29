@class HTSEventContext, NSString, NSArray, IESLiveCombineSubject, IESLiveLinkMicAudienceMVTab, IESLiveUGCVideoCellModel, IESLiveMultiOrderSingApi, NSMutableArray, NSNumber;

@interface IESLiveMultiOrderSingMVPanelModel : NSObject

@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *bindVid;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveMultiOrderSingApi *api;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) long long defaultTabSelectIndex;
@property (retain, nonatomic) IESLiveLinkMicAudienceMVTab *defaultTab;
@property (copy, nonatomic) NSArray *tabList;
@property (retain, nonatomic) IESLiveUGCVideoCellModel *selectedModel;
@property (retain, nonatomic) NSMutableArray *pageList;
@property (retain, nonatomic) IESLiveCombineSubject *tabListChangeSubject;
@property (retain, nonatomic) IESLiveCombineSubject *tabSelectChangeSubject;
@property (retain, nonatomic) IESLiveCombineSubject *modelSelectChangeSubject;
@property (nonatomic) BOOL isBinding;
@property (copy, nonatomic) NSString *currentSingItemId;
@property (copy, nonatomic) id /* block */ hidePanelAction;
@property (copy, nonatomic) id /* block */ mvDidBindAction;

- (void)fetchTabList;
- (BOOL)isInRoomBattle;
- (id)initWithRoomID:(id)a0 itemID:(id)a1 trackContext:(id)a2;
- (void)didClickPreviewLabel;
- (id)tabListChangeSignal;
- (void)updateSelectedTabWithIndex:(long long)a0;
- (id)tabSelectChangeSignal;
- (id)modelSelectChangeSignal;
- (void)didClickActionButtonWithRequestPage:(id)a0;
- (void)didClickPreviewVideoWithPause:(BOOL)a0;
- (void)updateSelectedModelWithModel:(id)a0;
- (void)fetchMVListWithTabID:(id)a0;
- (void)updateBindStateWithCellModels:(id)a0 vid:(id)a1 bind:(BOOL)a2;
- (void)updateBindStateWithVid:(id)a0 bind:(BOOL)a1;
- (BOOL)isCurrentItemSinging;
- (void)trackMVPageShow;
- (void)trackMVButtonClickWithType:(id)a0 requestPage:(id)a1;
- (void)openLockedRulePage;
- (void)unbindMVToItemWithVid:(id)a0 completion:(id /* block */)a1;
- (void)postNotificationToLynxForClose;
- (void)bindMVToItemWithModel:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)userType;
- (void)dealloc;

@end
