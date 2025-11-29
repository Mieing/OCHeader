@class NSDictionary;

@interface AWEDCFeedBaseConfig : NSObject

@property (retain, nonatomic) NSDictionary *propertyDict;

+ (id)defaultConfig;

- (void)setupDefaultConfig;
- (id)identifierAndPropertyName;
- (void)updateProperty:(id)a0 withPropertyName:(id)a1 value:(id)a2;
- (void)updateConfigWithDictionary:(id)a0;
- (void)updateConfigWithBizTag:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
