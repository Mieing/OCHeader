@class NSString, NSMutableDictionary;

@interface TrackPresentMgr : MMUserService <IMsgExt, MMServiceProtocol> {
    NSMutableDictionary *_trackRoomList;
    BOOL _isTrackRoomListLoaded;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)handleTrackRoomInfoMessage:(id)a0 withMessageWrap:(id)a1;
- (id)getTrackRoomInfoFromMessageWrag:(id)a0;
- (BOOL)writeToFile:(id)a0 data:(id)a1;
- (void)saveTrackRoomInfoList;
- (BOOL)loadTrackRoomInfoList;
- (BOOL)isTrackRoomEmpty:(id)a0;
- (id)getTrackRoomMembersByUsername:(id)a0;
- (BOOL)isTrackRoomExpired:(id)a0;
- (id)getRoomPOIByUsername:(id)a0;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void).cxx_destruct;

@end
