@class NSString;

@interface CJPayUnifyGetCertResponse : CJPayBaseResponse

@property (copy, nonatomic) NSString *certData;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;
- (BOOL)isSuccess;

@end
