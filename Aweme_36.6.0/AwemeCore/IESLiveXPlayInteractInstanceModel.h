@class NSString, NSDictionary;
@protocol IESLiveRoomService;

@interface IESLiveXPlayInteractInstanceModel : NSObject

@property (copy, nonatomic) NSString *linkmicID;
@property (copy, nonatomic) NSDictionary *rtcExtraInfo;
@property (copy, nonatomic) NSDictionary *liveCoreExtraInfo;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;

- (void).cxx_destruct;

@end
