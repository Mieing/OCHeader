@class NSObject;

@interface IESLiveMultiRoomSubscribeItem : NSObject

@property (weak, nonatomic) NSObject *subscriber;
@property (copy, nonatomic) id /* block */ changeRoomCallback;

- (void).cxx_destruct;

@end
