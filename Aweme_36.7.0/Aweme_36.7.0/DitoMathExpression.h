@class NSString;

@interface DitoMathExpression : NSObject

@property (copy, nonatomic) NSString *resultValue;
@property (copy, nonatomic) NSString *errorDescription;
@property (copy, nonatomic) NSString *rawData;

+ (id)defaultVariable;

- (id)calculateWithVariable:(id)a0;
- (void).cxx_destruct;
- (id)initWithRawData:(id)a0;

@end
