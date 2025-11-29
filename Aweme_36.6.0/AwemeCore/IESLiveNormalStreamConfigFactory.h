@protocol IESLiveRoomService;

@interface IESLiveNormalStreamConfigFactory : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;

- (id)normalStreamConfigWith:(id)a0;
- (void).cxx_destruct;

@end
