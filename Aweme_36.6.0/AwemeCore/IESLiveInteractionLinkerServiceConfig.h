@protocol IESLiveRoomService;

@interface IESLiveInteractionLinkerServiceConfig : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) long long mode;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long fullLinkModule;
@property (nonatomic) BOOL customEnterBackground;
@property (copy, nonatomic) id /* block */ toastBlock;
@property (copy, nonatomic) id /* block */ shouldChangeKTVStreamLayout;

- (void).cxx_destruct;

@end
