@class NSString;

@interface AWELiveOuterEnterRoomServiceImpl : NSObject <IESLiveOuterEnterRoomService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasCreatedLiveRoom;
- (unsigned long long)forbidEnterRoomForLiveRoomMode:(id)a0;
- (unsigned long long)smallWindowForbidEnterRoomWithRoomId:(id)a0;
- (BOOL)forbidStartLiveRoom;
- (unsigned long long)forbidEnterRoomIfNeededWithRoomId:(id)a0 anchorId:(id)a1 allowEnterSameRoomID:(BOOL)a2 liveRoomModel:(id)a3;

@end
