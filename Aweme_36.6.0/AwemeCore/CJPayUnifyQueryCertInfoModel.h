@class NSString;

@interface CJPayUnifyQueryCertInfoModel : JSONModel

@property (copy, nonatomic) NSString *certDN;
@property (copy, nonatomic) NSString *certSN;
@property (copy, nonatomic) NSString *expireTime;
@property (copy, nonatomic) NSString *certDid;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
