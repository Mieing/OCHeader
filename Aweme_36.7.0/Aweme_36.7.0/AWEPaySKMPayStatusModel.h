@class NSString;

@interface AWEPaySKMPayStatusModel : CJPayBaseResponse

@property (copy, nonatomic) NSString *msgId;
@property (copy, nonatomic) NSString *msgType;
@property (copy, nonatomic) NSString *nickName;
@property (nonatomic) long long payStatusCode;
@property (copy, nonatomic) NSString *payStatusMsg;
@property (copy, nonatomic) NSString *profileImageUrl;
@property (copy, nonatomic) NSString *pushTime;
@property (copy, nonatomic) NSString *sendUidMask;
@property (copy, nonatomic) NSString *sendDidMask;
@property (copy, nonatomic) NSString *amount;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
