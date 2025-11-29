@class NSString;

@interface AWEPOIOwnerModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *ownerID;
@property (copy, nonatomic) NSString *ownerName;
@property (copy, nonatomic) NSString *ownerSignature;
@property (copy, nonatomic) NSString *ownerAvatarURL;
@property (copy, nonatomic) NSString *businessDay;
@property (copy, nonatomic) NSString *businessHour;
@property (copy, nonatomic) NSString *claimURLString;
@property (copy, nonatomic) NSString *verifyReson;
@property (copy, nonatomic) NSString *securedOwnerID;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
