@class NSString, NSDictionary;

@interface BDUGLuckyCatLoginXBridgeModel : BDXBridgeModel

@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSString *titleType;
@property (copy, nonatomic) NSString *loginSource;
@property (copy, nonatomic) NSDictionary *extraData;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)dictionaryValue;

@end
