@class NSString;

@interface CJPayRetainMsgV2 : JSONModel

@property (copy, nonatomic) NSString *leftMsg;
@property (copy, nonatomic) NSString *leftMsgType;
@property (copy, nonatomic) NSString *rightMsg;
@property (nonatomic) long long voucherType;
@property (copy, nonatomic) NSString *tagMsg;
@property (copy, nonatomic) NSString *prizeDesc;
@property (copy, nonatomic) NSString *leftMsgDesc;
@property (copy, nonatomic) NSString *voucherLeftDesc;
@property (copy, nonatomic) NSString *voucherBgTypeStr;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
