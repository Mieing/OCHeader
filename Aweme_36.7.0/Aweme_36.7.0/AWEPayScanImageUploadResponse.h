@class NSString, NSDictionary;

@interface AWEPayScanImageUploadResponse : CJPayBaseResponse

@property (copy, nonatomic) NSString *retCode;
@property (copy, nonatomic) NSString *retMsg;
@property (copy, nonatomic) NSString *storeKey;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *sessionToken;
@property (copy, nonatomic) NSString *serviceId;
@property (copy, nonatomic) NSString *secretKey;
@property (retain, nonatomic) NSDictionary *extension;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;
- (BOOL)isSuccess;

@end
