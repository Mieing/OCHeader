@interface AWEUndertakeFilterPossibilityCondition : AWEUndertakeFilterBaseCondition

@property (nonatomic) unsigned long long possibility;
@property (nonatomic) long long conditionStatus;

- (long long)statusWithData:(id)a0 extraInfo:(id)a1;
- (id)initWithPossibility:(long long)a0;
- (id)init;

@end
