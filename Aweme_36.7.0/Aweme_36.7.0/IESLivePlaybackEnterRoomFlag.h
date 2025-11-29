@interface IESLivePlaybackEnterRoomFlag : NSObject

@property (nonatomic) BOOL viewDidShow;
@property (nonatomic) BOOL playerRendered;
@property (nonatomic) BOOL didLoadComponents;
@property (nonatomic) BOOL apiCompleted;

- (BOOL)enterRoomCompleted;

@end
