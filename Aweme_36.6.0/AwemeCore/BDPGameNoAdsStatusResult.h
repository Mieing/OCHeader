@class NSString, BDPGameNoAdsDisplayInfo;

@interface BDPGameNoAdsStatusResult : NSObject

@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL isExpiringSoon;
@property (nonatomic) BOOL purchaseVisible;
@property (copy, nonatomic) NSString *logID;
@property (retain, nonatomic) BDPGameNoAdsDisplayInfo *displayInfo;

+ (id)modelWithJson:(id)a0;

- (void).cxx_destruct;

@end
