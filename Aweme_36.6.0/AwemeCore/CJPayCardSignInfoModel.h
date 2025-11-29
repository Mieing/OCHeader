@class NSString;

@interface CJPayCardSignInfoModel : JSONModel

@property (copy, nonatomic) NSString *sign;
@property (copy, nonatomic) NSString *signOrderNo;
@property (copy, nonatomic) NSString *smchId;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
