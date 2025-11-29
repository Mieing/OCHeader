@class NSArray;

@interface SECDataClassifyQuery : NSObject

@property (copy, nonatomic) NSArray *classifyTypes;
@property (retain, nonatomic) id targetObj;
@property (nonatomic) BOOL allTypes;
@property (nonatomic) unsigned long long maxClassifyDepth;

+ (id)queryForAllTypesWithTarget:(id)a0;
+ (id)queryForTypes:(id)a0 withTarget:(id)a1;

- (BOOL)queryAllTypes;
- (void).cxx_destruct;

@end
