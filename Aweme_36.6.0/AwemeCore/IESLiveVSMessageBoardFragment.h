@class IESLiveVSMessageBoardApi, NSString, HTSLiveImage, HTSLiveToolbarItem, InteractDressInfoResponse_DressInfo, NSMutableDictionary, NSDictionary, HTSLiveCommentsSyncData, IESLiveVSMessageBoardInputPanelView, NSMutableArray, IESLiveVSMessageBoardStore;

@interface IESLiveVSMessageBoardFragment : IESLiveRoomComponent <IESLiveVSMessageBoardInputPanelDelegate, IESLiveVSMessageBoardRouter, IESLiveDataSyncDelegate, HTSLiveStreamPlayerAction, IESLiveToolbarComponentHandler, HTSLiveMessageSubscriber, IESLiveAutoRotateAction>

@property (retain, nonatomic) HTSLiveToolbarItem *toolbarItem;
@property (retain, nonatomic) IESLiveVSMessageBoardApi *api;
@property (retain, nonatomic) NSMutableDictionary *thumbup_list;
@property (retain, nonatomic) IESLiveVSMessageBoardInputPanelView *inputPanelView;
@property (retain, nonatomic) IESLiveVSMessageBoardStore *store;
@property (copy, nonatomic) id /* block */ openInputPanelJSB;
@property (copy, nonatomic) NSDictionary *inputPanelReplyParams;
@property (retain, nonatomic) HTSLiveCommentsSyncData *commentDataCache;
@property (copy, nonatomic) NSString *thumbupListDataStr;
@property (copy, nonatomic) NSString *uiConfig;
@property (nonatomic) long long boardItemStatus;
@property (nonatomic) BOOL firstFetchVSMessageBoard;
@property (retain, nonatomic) HTSLiveImage *iconImage;
@property (copy, nonatomic) NSString *toolbarDataJsonStr;
@property (copy, nonatomic) NSString *toolbarDataSchemaURL;
@property (copy, nonatomic) NSString *dressInfoForWeb;
@property (retain, nonatomic) InteractDressInfoResponse_DressInfo *dressUpModel;
@property (retain, nonatomic) NSMutableArray *entityIdArray;
@property (copy, nonatomic) NSString *paySchema;
@property (nonatomic) long long gradientType;
@property (nonatomic) BOOL hasShowPortrait;
@property (nonatomic) BOOL hasShowLandscape;
@property (nonatomic) BOOL hasOpenMessageBoard;
@property (copy, nonatomic) NSString *schemaCommentId;
@property (nonatomic) BOOL hasAutoOpenVSMessageBoard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentMount;
- (void)componentOrientationChanged:(long long)a0;
- (void)subscribedSyncDataWithValue:(id)a0 version:(long long)a1;
- (void)subscribedSyncDataUpdatedWithValue:(id)a0 oldVersion:(long long)a1 newVersion:(long long)a2;
- (void)willAutoRotateToOrientation:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)appearDidFinishForLevel:(long long)a0;
- (void)toolbarReceiveComponent:(id)a0 completion:(id /* block */)a1;
- (void)toolbarComponentRemovedReason:(unsigned long long)a0 extra:(id)a1;
- (void)openVSMessageBoardInputPanelWithParameters:(id)a0 completion:(id /* block */)a1;
- (void)setVSMessageBoardCommentCacheDataWithKey:(id)a0 value:(id)a1;
- (void)getVSMessageBoardCommentCacheDataWithKeys:(id)a0 requestFrom:(id)a1 completion:(id /* block */)a2;
- (void)openVSMessageBoardViewWithSource:(id)a0 isUserClick:(BOOL)a1;
- (void)fetchVSMessageBoardDressUpList;
- (void)initVSMessageBoardToolbar;
- (void)initFetchVSMessageBoard;
- (void)trackVSMessageBoardToolbarShow:(id)a0;
- (BOOL)shouldShowRedDotRecord:(id)a0;
- (long long)dressUpThemeSkinRecord:(id)a0;
- (long long)dressUpExclusiveMedalRecord:(id)a0;
- (void)trackForDressUp;
- (void)clearInputPanelWithClearDraft:(BOOL)a0;
- (void)openInputView;
- (void)getEntityIdArray;
- (void)inputPanel:(id)a0 commentDidChange:(id)a1;
- (void)inputPanelDidClickSend:(id)a0;
- (void)inputPanelDismiss:(id)a0 isSendClicked:(BOOL)a1;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
