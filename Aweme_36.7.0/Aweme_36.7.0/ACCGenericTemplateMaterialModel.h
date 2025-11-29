@class NSString;

@interface ACCGenericTemplateMaterialModel : NSObject

@property (nonatomic) unsigned long long materialType;
@property (copy, nonatomic) NSString *filePath;

+ (id)materialModelWithMaterialType:(unsigned long long)a0 filePath:(id)a1;

- (void).cxx_destruct;

@end
