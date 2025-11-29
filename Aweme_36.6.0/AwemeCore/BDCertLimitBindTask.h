@class NSString, NSDictionary, BDCertLimitModel;

@interface BDCertLimitBindTask : NSObject

@property (copy, nonatomic) NSString *prioryId;
@property (copy, nonatomic) NSString *associateId;
@property (copy, nonatomic) NSDictionary *searchMap;
@property (copy, nonatomic) NSDictionary *limitMap;
@property (copy, nonatomic) NSDictionary *conditionMap;
@property (copy, nonatomic) NSDictionary *fallbackSearchMap;
@property (copy, nonatomic) NSDictionary *fallbackLimitMap;
@property (copy, nonatomic) NSDictionary *fallbackConditionMap;
@property (nonatomic) BOOL noFallback;
@property (retain, nonatomic) BDCertLimitModel *result;

- (id)searchLimitId;
- (id)searchConditionIdsWithLimitId:(id)a0;
- (id)searchConditionWithId:(id)a0;
- (id)searchLimitIdInDict:(id)a0 withKey:(id)a1;
- (void).cxx_destruct;
- (void)execute;

@end
