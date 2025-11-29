@class NSString;

@interface LSIMSettingsServiceImpl : NSObject <LSIMBizCSettingsService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)boolForSetKey:(id)a0;
- (long long)integerForSetKey:(id)a0;
- (double)floatForSetKey:(id)a0;
- (id)stringForSetKey:(id)a0;
- (id)dictionaryForSetKey:(id)a0;
- (id)arrayForSetKey:(id)a0;
- (id)imSettings;
- (id)imLynxSettings;
- (id)imDefaultDBConfigSettings;
- (id)defaultPigeonSDKConfig;
- (id)defaultGoodsNormalListURL;
- (id)defaultOrderListURL;
- (id)defaultReportPageURL;

@end
