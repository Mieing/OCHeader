@class NSString;

@interface CJPayMemberVerifyInfo : JSONModel

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *verifyId;
@property (copy, nonatomic) NSString *verifyToken;

+ (id)keyMapper;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
