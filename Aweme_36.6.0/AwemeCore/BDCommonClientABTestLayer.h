@class NSString, NSArray, NSDictionary;

@interface BDCommonClientABTestLayer : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *groups;
@property (copy, nonatomic) NSDictionary *filters;

- (id)initWithName:(id)a0 groups:(id)a1;
- (BOOL)isLegal;
- (void).cxx_destruct;

@end
