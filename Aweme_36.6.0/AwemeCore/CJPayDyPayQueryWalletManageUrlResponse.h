@class NSString;

@interface CJPayDyPayQueryWalletManageUrlResponse : CJPayBaseResponse

@property (copy, nonatomic) NSString *appleWalletManageUrl;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;
- (BOOL)isSuccess;

@end
