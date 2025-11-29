@class NSString;

@interface CJPayVerifyMsgInfoModel : JSONModel

@property (copy, nonatomic) NSString *iconURL;
@property (copy, nonatomic) NSString *msg;
@property (copy, nonatomic) NSString *position;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
