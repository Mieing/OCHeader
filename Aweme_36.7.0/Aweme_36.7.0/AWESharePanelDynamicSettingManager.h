@class NSArray, NSDictionary, NSMutableDictionary, NSString, AWEShareContext;

@interface AWESharePanelDynamicSettingManager : NSObject <AWEShareChannelConfigProtocol>

@property (nonatomic) BOOL isDataValid;
@property (copy, nonatomic) NSDictionary *actionTypeDictionary;
@property (copy, nonatomic) NSDictionary *actionStandardDictionary;
@property (copy, nonatomic) NSDictionary *shareTypeDictionary;
@property (retain, nonatomic) NSArray *allShareTypesOfAweme;
@property (retain, nonatomic) NSArray *moreChannelListOfAweme;
@property (retain, nonatomic) NSMutableDictionary *shareConfigs;
@property (nonatomic) BOOL isGurdResource;
@property (nonatomic) BOOL updatedInternalResource;
@property (retain, nonatomic) AWEShareContext *context;
@property (retain, nonatomic) NSArray *sortingChannelsOfAweme;
@property (retain, nonatomic) NSArray *sortingActionsOfAweme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)trackLogWithKey:(id)a0 message:(id)a1;
- (id)iconImageWithName:(id)a0;
- (BOOL)enableDynamicSetting;
- (id)standardShareValueByType:(id)a0;
- (id)debugShareTypesOfAweme;
- (id)sortStrategy:(id)a0 key:(id)a1;
- (id)configModelWith:(id)a0;
- (id)configRawDataFromSettings;
- (id)configRawDataFromGurd;
- (void)updateConfigModelWithRawData:(id)a0;
- (id)convertAWEShareTypeFromString:(id)a0;
- (id)chapterShareLocalSettings;
- (void).cxx_destruct;
- (void)updateWithContext:(id)a0;
- (id)localSettings;

@end
