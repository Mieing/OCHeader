@class TrackPOIItem, NSString, NSMutableArray, BaseResponse;

@interface RefreshTrackRoomResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *positions;
@property (retain, nonatomic) NSString *retMsg;
@property (nonatomic) unsigned int refreshTime;
@property (retain, nonatomic) TrackPOIItem *roomPoi;
@property (nonatomic) unsigned int onlineUserCount;
@property (nonatomic) unsigned int hasLegacyUser;

+ (void)initialize;

@end
