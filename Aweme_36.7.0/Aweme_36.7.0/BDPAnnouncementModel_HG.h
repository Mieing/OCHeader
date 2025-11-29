@class NSString;

@interface BDPAnnouncementModel_HG : NSObject

@property (nonatomic) long long expireTime;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *confirmButtonText;
@property (copy, nonatomic) NSString *redirectButtonText;
@property (copy, nonatomic) NSString *redirectURLString;
@property (nonatomic) long long presentFrequency;
@property (copy, nonatomic) NSString *modelId;
@property (nonatomic) long long buttonType;
@property (copy, nonatomic) NSString *protocolLink;
@property (copy, nonatomic) NSString *protocolText;
@property (copy, nonatomic) NSString *iconURL;
@property (nonatomic) long long presentType;
@property (nonatomic) long long realPresentType;

- (BOOL)hasRedirectButton;
- (long long)redirectButtonType;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)a0;
- (BOOL)isModelValid;

@end
