@class CJPayUnifyQueryCertInfoModel;

@interface CJPayUnifyQueryCertResponse : CJPayBaseResponse

@property (retain, nonatomic) CJPayUnifyQueryCertInfoModel *certInfo;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
