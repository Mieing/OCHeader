@class NSString;

@interface CJPayRetainMsgModel : JSONModel

@property (copy, nonatomic) NSString *leftMsg;
@property (nonatomic) long long leftMsgType;
@property (copy, nonatomic) NSString *rightMsg;
@property (copy, nonatomic) NSString *topLeftMsg;
@property (nonatomic) long long voucherType;
@property (copy, nonatomic) NSString *topLeftPosition;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
