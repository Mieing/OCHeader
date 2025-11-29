@class IESEffectModel;

@interface AWEEffectModelMixinPropTypeInfo : NSObject

@property (weak, nonatomic) IESEffectModel *hostEffectModel;

- (id)rawParam;
- (BOOL)isDuetEffect;
- (id)rawFilterDictionary;
- (BOOL)isRawTypeProp;
- (void).cxx_destruct;

@end
