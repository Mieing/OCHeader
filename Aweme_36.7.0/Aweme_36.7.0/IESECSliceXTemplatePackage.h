@class IESECSliceXElement, IESECSliceXTemplateConfig;

@interface IESECSliceXTemplatePackage : NSObject <NSCopying>

@property (readonly, nonatomic) IESECSliceXElement *element;
@property (readonly, nonatomic) IESECSliceXTemplateConfig *templateConfig;

+ (id)resourcePackageWithJSONDict:(id)a0 templateInfo:(id)a1;

- (id)initWithJSONDict:(id)a0 templateInfo:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
