@class NSArray, NSMutableArray;

@interface HMSearchOrCondition : HMSearchCondition

@property (retain, nonatomic) NSMutableArray *internalConditions;
@property (readonly, nonatomic) NSArray *conditions;

- (void)addCondition:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
