@class NSString, NSDictionary, NSArray, AWENearbyTrackVerifyRuleModel;

@interface AWENearbyTrackVerifyResultModel : NSObject

@property (retain, nonatomic) AWENearbyTrackVerifyRuleModel *ruleModel;
@property (nonatomic) unsigned long long verfiyResult;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSDictionary *errorParams;
@property (copy, nonatomic) NSDictionary *coverErrorParams;
@property (copy, nonatomic) NSArray *nullCheckErrorParams;
@property (copy, nonatomic) NSDictionary *resultParams;

- (void).cxx_destruct;

@end
