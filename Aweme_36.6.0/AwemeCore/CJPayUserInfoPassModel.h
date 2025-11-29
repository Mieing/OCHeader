@class CJPayPassExtModel, NSDictionary, NSString;

@interface CJPayUserInfoPassModel : JSONModel

@property (retain, nonatomic) CJPayPassExtModel *extModel;
@property (copy, nonatomic) NSDictionary *extDic;
@property (nonatomic) BOOL isNeedLogin;
@property (nonatomic) long long passportStauts;
@property (readonly, copy, nonatomic) NSString *redirectUrl;
@property (copy, nonatomic) NSString *url;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
