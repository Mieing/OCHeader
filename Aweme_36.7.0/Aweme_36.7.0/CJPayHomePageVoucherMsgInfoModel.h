@class NSString;

@interface CJPayHomePageVoucherMsgInfoModel : JSONModel

@property (copy, nonatomic) NSString *leftMsg;
@property (copy, nonatomic) NSString *rightMsg;
@property (copy, nonatomic) NSString *tagShowType;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
