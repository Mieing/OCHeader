@class NSDictionary, NSString;

@interface AWEKefuFloatingWindowBaseStateConfig : AWEBaseBizConfigModel

@property (retain, nonatomic) NSDictionary *rawData;
@property (retain, nonatomic) NSString *state;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end
