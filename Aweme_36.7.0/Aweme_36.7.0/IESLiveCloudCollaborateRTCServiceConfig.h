@class NSString, NSDictionary;
@protocol IESLiveRoomService;

@interface IESLiveCloudCollaborateRTCServiceConfig : NSObject

@property (copy, nonatomic) NSString *publicStreamId;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (copy, nonatomic) NSString *linkmicID;
@property (copy, nonatomic) NSDictionary *rtcExtInfo;
@property (copy, nonatomic) NSString *joinedUserRoomId;
@property (copy, nonatomic) NSString *collaborateRoomId;

- (void).cxx_destruct;

@end
