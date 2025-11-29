@interface RelaxFramework.ListScrollByRet : NSObject

@property (nonatomic) double consumedX;
@property (nonatomic) double consumedY;
@property (nonatomic) double unconsumedX;
@property (nonatomic) double unconsumedY;

- (id)initWithConsumedX:(double)a0 consumedY:(double)a1 unconsumedX:(double)a2 unconsumedY:(double)a3;
- (id)init;

@end
