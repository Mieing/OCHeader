@class NSString, EmoticonLensItemConfig;

@interface EmoticonLensItem : NSObject

@property (retain, nonatomic) NSString *itemPath;
@property (retain, nonatomic) EmoticonLensItemConfig *config;
@property (readonly, nonatomic) long long type;

+ (id)buildItemAtDir:(id)a0 type:(long long)a1 version:(double)a2 serverConfigPath:(id)a3;
+ (id)readItemInDir:(id)a0;

- (id)initWithConfig:(id)a0 dir:(id)a1;
- (void)addResourceDir:(id)a0 params:(id)a1;
- (void)pickParams:(id)a0;
- (void)buildConfigJson;
- (BOOL)validate;
- (void)setAutoAdjust:(BOOL)a0;
- (void).cxx_destruct;

@end
