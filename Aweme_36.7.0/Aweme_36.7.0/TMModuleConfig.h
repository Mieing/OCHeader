@class NSDictionary;

@interface TMModuleConfig : NSObject

@property (copy, nonatomic) NSDictionary *rawData;
@property (nonatomic) BOOL enable;

+ (id)identifier;
+ (id)configKey;

- (Class)moduleClass;
- (id)submodules;
- (BOOL)canAsyncInit;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end
