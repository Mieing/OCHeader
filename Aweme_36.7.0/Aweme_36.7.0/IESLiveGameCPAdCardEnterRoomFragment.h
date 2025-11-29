@class IESLiveGameCPAdCardEnterRoomModel, NSString, AWEAwemeModel, AWEOriginalAdModel;

@interface IESLiveGameCPAdCardEnterRoomFragment : IESLiveRoomComponent <IESLiveGameCooperationPartnerActions>

@property (retain, nonatomic) AWEAwemeModel *awemeModelToLiveRoom;
@property (retain, nonatomic) AWEOriginalAdModel *adInfo;
@property (retain, nonatomic) IESLiveGameCPAdCardEnterRoomModel *gameCPModel;
@property (nonatomic) BOOL didHandleAutoAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentCreate;
- (void)componentMount;
- (void)componentDidAppear;
- (void)componentUnmount;
- (id)entranceInterface;
- (void)audienceGameCooperationPartnerEntranceDidShowWithOnEnter:(BOOL)a0;
- (void)handleAutoAction;
- (BOOL)schemaHandle;
- (void)adCardDataHandle;
- (void)openAppStoreWhenEnterRoomWithDownloadCardUsingStoreKit;
- (void).cxx_destruct;

@end
