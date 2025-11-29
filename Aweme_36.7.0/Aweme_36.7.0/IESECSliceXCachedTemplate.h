@class IESECSliceXResourceLoadInfo, IESECSliceXTemplatePackage;

@interface IESECSliceXCachedTemplate : NSObject

@property (copy, nonatomic) IESECSliceXTemplatePackage *templatePackage;
@property (copy, nonatomic) IESECSliceXResourceLoadInfo *loadInfo;

+ (void)initialize;

- (id)initWithPackage:(id)a0 loadInfo:(id)a1;
- (void).cxx_destruct;

@end
