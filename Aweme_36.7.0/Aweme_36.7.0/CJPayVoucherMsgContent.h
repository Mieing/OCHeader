@class NSString;

@interface CJPayVoucherMsgContent : JSONModel

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *text;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
