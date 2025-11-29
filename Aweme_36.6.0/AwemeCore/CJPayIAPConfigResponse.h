@class NSString;

@interface CJPayIAPConfigResponse : CJPayBaseResponse

@property (copy, nonatomic) NSString *failPopupConfig;
@property (copy, nonatomic) NSString *growthRetainConfig;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (id)failPopupConfigModel;
- (id)growthRetainConfigModel;
- (void).cxx_destruct;

@end
