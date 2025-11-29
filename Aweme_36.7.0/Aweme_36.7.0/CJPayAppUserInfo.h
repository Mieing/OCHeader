@class NSString;

@interface CJPayAppUserInfo : JSONModel

@property (copy, nonatomic) NSString *avatarUrl;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *mobileMask;
@property (copy, nonatomic) NSString *uid;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
