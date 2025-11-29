@class NSString, NSArray;

@interface IESLiveRoomStrategyRequest : NSObject

@property (weak, nonatomic) id player;
@property (copy, nonatomic) NSString *useScene;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSArray *strategiesToCompute;

- (void).cxx_destruct;

@end
