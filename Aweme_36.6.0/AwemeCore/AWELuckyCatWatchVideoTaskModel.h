@class NSString, NSArray;

@interface AWELuckyCatWatchVideoTaskModel : BDXBridgeModel

@property (copy, nonatomic) NSString *taskID;
@property (copy, nonatomic) NSString *taskKey;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *mark;
@property (copy, nonatomic) NSArray *consumeScenes;
@property (nonatomic) double totalTaskTime;
@property (nonatomic) double timeInterval;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
