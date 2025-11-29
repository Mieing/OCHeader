@class NSString, NSDictionary, CJPayUnifyChangeVerifyTypeModel;

@interface CJPayUnifyPreVerifyResultModel : JSONModel

@property (nonatomic) unsigned long long resultType;
@property (retain, nonatomic) CJPayUnifyChangeVerifyTypeModel *changeModel;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSDictionary *params;

- (void).cxx_destruct;

@end
