@class NSString;

@interface CJPayVoucherListModel : JSONModel

@property (copy, nonatomic) NSString *mixVoucherMsg;
@property (copy, nonatomic) NSString *basicVoucherMsg;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
