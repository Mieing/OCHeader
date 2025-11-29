@class WSTemplatePackage;

@interface WSTemplatePackageManager : NSObject

@property (retain, nonatomic) WSTemplatePackage *appResourcePackage;
@property (retain, nonatomic) WSTemplatePackage *updatedResourcePackage;
@property (retain, nonatomic) WSTemplatePackage *devResourcePackage;
@property (readonly, nonatomic) WSTemplatePackage *activePackage;

- (id)initWithZipResourcePath:(id)a0 privateResourcePath:(id)a1 packageName:(id)a2 bizType:(unsigned long long)a3;
- (void).cxx_destruct;

@end
