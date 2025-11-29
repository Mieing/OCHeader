@class NSString, NSDictionary, BDPGameVideoBackupContentConfig, BDPGameVideoBackupRewardConfig;

@interface BDPGameVideoAdBackupModel : NSObject

@property (copy, nonatomic) NSDictionary *rawData;
@property (copy, nonatomic) NSString *page_url;
@property (retain, nonatomic) BDPGameVideoBackupContentConfig *content_config;
@property (retain, nonatomic) BDPGameVideoBackupRewardConfig *reward_config;

- (void).cxx_destruct;

@end
