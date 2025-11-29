@protocol IESLiveRoomService;

@interface IESLiveChorusLinkerServiceConfig : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) long long mode;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long fullLinkModule;

- (void).cxx_destruct;

@end
