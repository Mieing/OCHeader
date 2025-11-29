@class NSString, NSTimer, IESECUserActionInfo, NSMutableSet, NSMutableDictionary;

@interface IESECUserActionHistory : NSObject

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long life;
@property (nonatomic) long long currCount;
@property (nonatomic) BOOL isAutoTrigger;
@property (nonatomic) BOOL needColorHeader;
@property (retain, nonatomic) IESECUserActionInfo *info;
@property (retain, nonatomic) NSMutableSet *hasReportRules;
@property (retain, nonatomic) NSMutableDictionary *ruleMap;

+ (id)keyWithActionInfo:(id)a0 config:(id)a1;

- (id)initWithActionInfo:(id)a0 config:(id)a1;
- (BOOL)hasReportForRuleId:(id)a0;
- (void).cxx_destruct;

@end
