@class NSString, CGFrontierInstructionCommonParams, NSDictionary;

@interface CGFrontierInstructionBuilder : NSObject

@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSString *inst;
@property (retain, nonatomic) CGFrontierInstructionCommonParams *commParam;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *seq;
@property (copy, nonatomic) NSString *sessionId;
@property (nonatomic) int serviceId;
@property (nonatomic) int methodId;

- (void).cxx_destruct;

@end
