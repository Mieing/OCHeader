@class NSString, GMCBaseArgsModel, NSValue;

@interface GMCModel : NSObject

@property (retain, nonatomic) GMCBaseArgsModel *argsModel;
@property (nonatomic) long long repeatCount;
@property (nonatomic) BOOL autoReverse;
@property (retain, nonatomic) NSString *keyPath;
@property (nonatomic) double duration;
@property (nonatomic) double delay;
@property (nonatomic) long long curveType;
@property (retain, nonatomic) NSValue *fromValue;
@property (retain, nonatomic) NSValue *toValue;

+ (id)modelWithKeyPath:(id)a0 duration:(double)a1 delay:(double)a2 curveType:(long long)a3 argsModel:(id)a4 fromValue:(id)a5 toValue:(id)a6;
+ (id)modelWithKeyPath:(id)a0 duration:(double)a1 delay:(double)a2 curveType:(long long)a3 fromValue:(id)a4 toValue:(id)a5;
+ (id)modelWithKeyPath:(id)a0 duration:(double)a1 delay:(double)a2 curveType:(long long)a3 customArgs:(id)a4 fromValue:(id)a5 toValue:(id)a6;
+ (id)modelWithKeyPath:(id)a0 duration:(double)a1 delay:(double)a2 repeatCount:(long long)a3 autoReverse:(BOOL)a4 curveType:(long long)a5 customArgs:(id)a6 fromValue:(id)a7 toValue:(id)a8;
+ (id)modelWithKeyPath:(id)a0 duration:(double)a1 delay:(double)a2 repeatCount:(long long)a3 autoReverse:(BOOL)a4 curveType:(long long)a5 fromValue:(id)a6 toValue:(id)a7;

- (void).cxx_destruct;

@end
