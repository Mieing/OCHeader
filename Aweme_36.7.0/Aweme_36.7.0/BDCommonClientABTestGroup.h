@class NSString, NSDictionary;

@interface BDCommonClientABTestGroup : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long minRegion;
@property (readonly, nonatomic) long long maxRegion;
@property (readonly, copy, nonatomic) NSDictionary *results;

- (id)initWithName:(id)a0 minRegion:(long long)a1 maxRegion:(long long)a2 results:(id)a3;
- (BOOL)isLegal;
- (void).cxx_destruct;

@end
