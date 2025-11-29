@class NSString;

@interface IESLiveBlockNode : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *queuelabel;
@property (nonatomic) double cost;
@property (nonatomic) double startTime;

- (void).cxx_destruct;

@end
