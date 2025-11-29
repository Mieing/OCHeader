@class HTSEventContext, HTSLiveEpisodeExtraInfo, IESLiveLinkedRoomListView, NSString, IESLiveRelatedLivePanelTabModel, GPBInt64ObjectDictionary, HTSLiveVSLinkInfo, IESLiveRelatedLiveEntryItem, NSNumber;

@interface IESLiveLinkedRoomsStore : NSObject <HTSLiveMessageSubscriber>

@property (retain, nonatomic) IESLiveRelatedLiveEntryItem *linkedRoomEntryItem;
@property (retain, nonatomic) IESLiveRelatedLivePanelTabModel *linkedRoomTabModel;
@property (retain, nonatomic) IESLiveLinkedRoomListView *linkedRoomListView;
@property (retain, nonatomic) GPBInt64ObjectDictionary *roomEpisodeMap;
@property (retain, nonatomic) HTSLiveEpisodeExtraInfo *extraInfo;
@property (retain, nonatomic) HTSLiveVSLinkInfo *linkInfo;
@property (nonatomic) BOOL hasShowPortraitEntryView;
@property (nonatomic) BOOL hasShowLandscapeEntryBtn;
@property (retain, nonatomic) NSNumber *roomId;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ updateVisibleCallBack;
@property (copy, nonatomic) id /* block */ openTabPanelCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateEntryVisible;
- (void)tr_addUgcParams:(id)a0;
- (id)addPrivateTrack:(id)a0;
- (void)jumpToLinkRoom:(id)a0;
- (void)bindBlocks;
- (void)requestLinkInfoIfNeeded;
- (id)creatPanelTabModel;
- (void)tr_PanelShow;
- (id)linkedRoomListViewWithEntryType:(long long)a0;
- (BOOL)shoudShowGameLinkedRoomsView;
- (void)tr_EntryShow:(BOOL)a0 extraDic:(id)a1;
- (void)tr_EntryShow:(BOOL)a0;
- (void)tr_EntryClick:(BOOL)a0;
- (id)creatToolbarItem;
- (id)tr_params;
- (BOOL)linkRoomInfoHasGameSource;
- (id)paramsForShowTrack:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;
- (id)initWithRoom:(id)a0;
- (void)mount;

@end
