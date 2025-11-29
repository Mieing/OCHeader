@class NSString, NSArray;

@interface TTClearCacheRule : JSONModel

@property (copy, nonatomic) NSString *clearId;
@property (nonatomic) long long clearRuleStatus;
@property (nonatomic) long long type;
@property (nonatomic) BOOL isTncSet;
@property (retain, nonatomic) NSArray *keyList;

+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
