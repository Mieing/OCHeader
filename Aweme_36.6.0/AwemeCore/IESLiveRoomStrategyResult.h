@class NSString;

@interface IESLiveRoomStrategyResult : NSObject

@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) id result;
@property (retain, nonatomic) id extra;
@property (copy, nonatomic) NSString *selectorStr;

- (void).cxx_destruct;
- (id)description;

@end
