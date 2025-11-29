@class NSNumber, NSString, NSArray;

@interface BDXBridgeInspireOpenRewardAdMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *finishTimes;
@property (retain, nonatomic) NSNumber *showTimes;
@property (retain, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *errorMsg;
@property (nonatomic) BOOL isSuccess;
@property (retain, nonatomic) NSArray *totalReward;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
