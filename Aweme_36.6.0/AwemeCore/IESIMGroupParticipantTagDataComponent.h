@interface IESIMGroupParticipantTagDataComponent : AWEIMComponentBase <IESIMGroupParticipantTagDataMessage, IESIMParticipantsDataManagerDelegate, IESIMGroupParticipantTagDataProtocol> {
    void /* unknown type, empty encoding */ tagService;
    void /* unknown type, empty encoding */ tagDataService;
    void /* unknown type, empty encoding */ modelList;
    void /* unknown type, empty encoding */ participantManager;
    void /* unknown type, empty encoding */ displayingTagKey;
    void /* unknown type, empty encoding */ displayingOwnerID;
    void /* unknown type, empty encoding */ lastTagExtJsonStr;
    void /* unknown type, empty encoding */ lastMemberTagSwitchEnable;
    void /* unknown type, empty encoding */ isFetchingDataWithUids;
    void /* unknown type, empty encoding */ trackedUidSet;
    void /* unknown type, empty encoding */ trackedNoticeMsgSet;
    void /* unknown type, empty encoding */ isLoadingData;
    void /* unknown type, empty encoding */ bridgeSubscriberList;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)getTagContainerModelWithUid:(id)a0;
- (BOOL)isTracked:(id)a0;
- (void)recordTrackUid:(id)a0;
- (BOOL)isNoticeMsgTracked:(id)a0;
- (void)recordTrackedNoticeMsgID:(id)a0;
- (void)didTagItemUpdate:(id)a0;
- (void)fetchRemoteData;
- (void)iesim_participantsDataSourceDidUpdate;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
