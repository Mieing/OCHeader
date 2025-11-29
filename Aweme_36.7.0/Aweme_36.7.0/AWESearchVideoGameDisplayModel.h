@class NSString, NSArray, AWESearchVideoGameAppStoreInfo, AWESearchVideoGameMonitorInfo;

@interface AWESearchVideoGameDisplayModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSArray *keywords;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *rank;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *score;
@property (copy, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSString *uniGameId;
@property (copy, nonatomic) NSString *videoNum;
@property (copy, nonatomic) NSString *playCount;
@property (nonatomic) BOOL enableCps;
@property (retain, nonatomic) AWESearchVideoGameAppStoreInfo *appStoreInfo;
@property (retain, nonatomic) AWESearchVideoGameMonitorInfo *monitorInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
