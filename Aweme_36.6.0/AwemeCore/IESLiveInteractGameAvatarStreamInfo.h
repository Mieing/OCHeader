@class NSString;

@interface IESLiveInteractGameAvatarStreamInfo : NSObject

@property (copy, nonatomic) NSString *rtcRoomId;
@property (copy, nonatomic) NSString *rtcUserId;
@property (copy, nonatomic) NSString *rtcAppId;
@property (copy, nonatomic) NSString *mixStreamTaskId;
@property (copy, nonatomic) NSString *publicStreamId;
@property (nonatomic) BOOL isMainCloudPlayer;

- (void).cxx_destruct;

@end
