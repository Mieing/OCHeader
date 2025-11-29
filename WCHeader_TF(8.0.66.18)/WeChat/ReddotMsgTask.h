@class GameCenterCommMsg;

@interface ReddotMsgTask : NSObject

@property (retain, nonatomic) GameCenterCommMsg *msg;
@property (copy, nonatomic) id /* block */ complete;

- (void).cxx_destruct;

@end
