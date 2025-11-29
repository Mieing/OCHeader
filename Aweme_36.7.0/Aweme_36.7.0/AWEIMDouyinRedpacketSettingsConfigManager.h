@class NSDictionary, NSMutableDictionary, NSArray;

@interface AWEIMDouyinRedpacketSettingsConfigManager : NSObject

@property (retain, nonatomic) NSDictionary *redpacketSettings;
@property (retain, nonatomic) NSMutableDictionary *actionsDict;
@property (nonatomic) double amountMaxLimit;
@property (nonatomic) double lastNow;
@property (nonatomic) double lastAmountLimitTime;
@property (copy, nonatomic) NSDictionary *officialCoverList;
@property (copy, nonatomic) NSArray *specialConfigArray;

+ (void)getCoverImage:(id)a0 imageType:(unsigned long long)a1 completion:(id /* block */)a2;
+ (void)getCoverImage:(id)a0 imageType:(unsigned long long)a1 size:(struct CGSize { double x0; double x1; })a2 completion:(id /* block */)a3;
+ (id)getCoverImage:(id)a0 imageType:(unsigned long long)a1 size:(struct CGSize { double x0; double x1; })a2;
+ (id)getCoverImage:(id)a0 imageType:(unsigned long long)a1;
+ (id)getCoverImageURI:(id)a0 imageType:(unsigned long long)a1;
+ (BOOL)checkGeckoResourceIsReady:(id)a0;
+ (double)feelGoodLimitTime;
+ (id)shareInstance;

- (id)p_searchCurrentTimeAction;
- (id)getGeckoImageNameWithCoverId:(id)a0 imageType:(unsigned long long)a1;
- (id)getImageCDNHostPrefix;
- (BOOL)p_checkTime:(double)a0 inDuration:(id)a1;
- (id)getRedpacketSettingsAction:(id)a0;
- (id)getRedPacketSelectedLynxSchema;
- (id)getAllOfficialCoverDict;
- (id)getVideoRedpacketReceiveLynxSchema;
- (id)getLynxPageSchemaWithKey:(id)a0;
- (id)getSpecialCoverConfigWithKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)loadConfigs;

@end
