@class UserPositionItem, BaseRequest, NSString, TrackPOIItem;

@interface RefreshTrackRoomRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *trackRoomId;
@property (nonatomic) int type;
@property (retain, nonatomic) UserPositionItem *userPosition;
@property (nonatomic) unsigned int timeStamp;
@property (retain, nonatomic) TrackPOIItem *userPoi;

+ (void)initialize;

@end
