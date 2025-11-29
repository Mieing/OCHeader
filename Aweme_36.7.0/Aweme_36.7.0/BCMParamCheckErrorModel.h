@class NSString;

@interface BCMParamCheckErrorModel : NSObject

@property (copy, nonatomic) NSString *paramName;
@property (copy, nonatomic) NSString *errorType;
@property (retain, nonatomic) id expectValue;
@property (retain, nonatomic) id actualValue;
@property (nonatomic) BOOL isValid;

+ (id)initWithParamName:(id)a0 errorType:(id)a1 expectValue:(id)a2 actualValue:(id)a3;

- (void).cxx_destruct;

@end
