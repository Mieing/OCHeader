@class NSString, NSArray;

@interface BDPAboutInfoModel : NSObject

@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *summary;
@property (copy, nonatomic) NSString *corpName;
@property (copy, nonatomic) NSString *idName;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSArray *domains;
@property (nonatomic) BOOL isCorp;
@property (nonatomic) long long updateTime;
@property (copy, nonatomic) NSString *registerationInfo;
@property (nonatomic) BOOL isShowMerchant;
@property (copy, nonatomic) NSString *merchantCorpName;
@property (copy, nonatomic) NSString *merchantOfficeWebsite;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
