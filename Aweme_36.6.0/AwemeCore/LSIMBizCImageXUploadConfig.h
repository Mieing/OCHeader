@class NSString, NSDate;

@interface LSIMBizCImageXUploadConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *accessKeyId;
@property (copy, nonatomic) NSString *secretAccessKey;
@property (copy, nonatomic) NSString *sessionToken;
@property (copy, nonatomic) NSString *expiredTime;
@property (copy, nonatomic) NSString *currentTime;
@property (copy, nonatomic) NSString *serviceId;
@property (retain, nonatomic) NSDate *expiredDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithPigeonImageUploadInfo:(id)a0;
- (void).cxx_destruct;

@end
