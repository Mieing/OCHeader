@class CJPayStyleLoadingConfig;

@interface CJPaySecurityLoadingConfig : JSONModel

@property (retain, nonatomic) CJPayStyleLoadingConfig *cycleStyleLoadingConfig;
@property (retain, nonatomic) CJPayStyleLoadingConfig *breatheStyleLoadingConfig;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
