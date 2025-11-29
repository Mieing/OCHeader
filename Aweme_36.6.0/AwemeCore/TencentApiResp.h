@class NSString, TencentApiReq;

@interface TencentApiResp : NSObject <NSSecureCoding>

@property (nonatomic) long long nRetCode;
@property (retain, nonatomic) NSString *sRetMsg;
@property (retain, nonatomic) TencentApiReq *objReq;

+ (id)respFromReq:(id)a0;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
