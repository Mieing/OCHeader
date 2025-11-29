@class NSString;

@interface AWESearchEcomLynxSugModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *sugType;
@property (copy, nonatomic) NSString *uiType;
@property (copy, nonatomic) NSString *jumpType;
@property (copy, nonatomic) NSString *jumpSchema;
@property (copy, nonatomic) NSString *rawData;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
