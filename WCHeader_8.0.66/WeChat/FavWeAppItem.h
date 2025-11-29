@class NSString;

@interface FavWeAppItem : FavoritesModel

@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *pagePath;
@property (copy, nonatomic) NSString *sourceDisplayName;
@property (copy, nonatomic) NSString *appId;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int pkgType;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int disableForward;
@property (nonatomic) unsigned int brandOfficialFlag;
@property (nonatomic) unsigned int relievedBuyFlag;
@property (nonatomic) unsigned int flagshipFlag;
@property (nonatomic) unsigned int financialLicenseFlag;
@property (copy, nonatomic) NSString *messageExtraData;
@property (nonatomic) unsigned int subType;
@property (copy, nonatomic) NSString *weappsourceUsername;

- (void).cxx_destruct;

@end
