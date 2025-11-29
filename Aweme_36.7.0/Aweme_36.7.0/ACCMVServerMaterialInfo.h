@class NSString;

@interface ACCMVServerMaterialInfo : NSObject

@property (copy, nonatomic) NSString *nativeMaterialPath;
@property (copy, nonatomic) NSString *algorithmName;
@property (copy, nonatomic) NSString *algorithmJson;
@property (copy, nonatomic) NSString *resultMaterialPath;
@property (nonatomic) unsigned long long algorithmResultType;

+ (id)mergeServerMaterialInfo:(id)a0;
+ (id)generateLocalAlgorithmMaterial:(id)a0;
+ (long long)getTypeFromFileExtension:(id)a0;

- (id)initWithDTONetFileBean:(id)a0;
- (id)dtoNetFileBean;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
