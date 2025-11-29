@class NSString;

@interface WCSessionPerformanceModel : MMObject <NSCopying>

@property (retain, nonatomic) NSString *pageName;
@property (nonatomic) unsigned long long caseId;
@property (nonatomic) unsigned long long costTime;
@property (nonatomic) unsigned long long totalCostTime;
@property (nonatomic) unsigned long long timestampMs;

- (id)getAttrDictionary;
- (id)toString;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
