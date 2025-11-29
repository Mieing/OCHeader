@class NSArray;

@interface MMTestRecorder : NSObject

@property (readonly, nonatomic) float x;
@property (readonly, nonatomic) NSArray *values;

+ (id)TestRecorderWithX:(float)a0 values:(id)a1;

- (id)initWithX:(float)a0 values:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
