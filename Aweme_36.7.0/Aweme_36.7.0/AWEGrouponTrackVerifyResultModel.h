@class AWEGrouponTrackVerifyRuleModel, NSString, NSDictionary, NSArray;

@interface AWEGrouponTrackVerifyResultModel : NSObject

@property (retain, nonatomic) AWEGrouponTrackVerifyRuleModel *ruleModel;
@property (nonatomic) unsigned long long verfiyResult;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSDictionary *errorParams;
@property (copy, nonatomic) NSDictionary *coverErrorParams;
@property (copy, nonatomic) NSArray *nullCheckErrorParams;
@property (copy, nonatomic) NSDictionary *resultParams;

- (void).cxx_destruct;

@end
