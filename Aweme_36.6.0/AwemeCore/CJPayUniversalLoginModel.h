@class CJPayUserInfo, NSString, NSError, CJPayUserInfoPassModel;

@interface CJPayUniversalLoginModel : JSONModel

@property (retain, nonatomic) CJPayUserInfo *userInfo;
@property (retain, nonatomic) CJPayUserInfoPassModel *passModel;
@property (copy, nonatomic) NSString *code;
@property (retain, nonatomic) NSError *error;

+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
