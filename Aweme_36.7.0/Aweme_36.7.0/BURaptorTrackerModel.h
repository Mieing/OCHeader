@class NSString, NSDictionary;

@interface BURaptorTrackerModel : NSObject <BUDBAutoModel>

@property (copy, nonatomic) NSString *trackID;
@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *gen_time;
@property (nonatomic) long long encrypt;
@property (nonatomic) long long sending;
@property (copy, nonatomic) NSDictionary *eventDataDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)b1u2_databaseName;
+ (id)b1u2_tableName;
+ (id)b1u2_ignoreProperties;
+ (id)b1u2_primaryKey;

- (id)initWithEventDataDict:(id)a0 index:(long long)a1;
- (BOOL)isStationShowOrClick;
- (BOOL)isDebugTracker;
- (id)keyValueInfo;
- (BOOL)isRealTimeTracker;
- (id)customDebugInfo;
- (void)_pbu_updateEventDataDictWithDict:(id)a0;
- (id)_pbu_encryptWithParams:(id)a0;
- (id)keyDictionayKey;
- (id)realTimeTrackerArray;
- (id)keyDictionayValue;
- (id)debugTrackerArray;
- (id)eventExtraInfoKey;
- (id)eventExtraInfoDict;
- (void)updateEventDataDict_custom_extra_ad_data_WithDict:(id)a0;
- (id)_pbu_decryptWithValue:(id)a0;
- (void)appendEventDataDict_custom_extra_ad_data_WithDict:(id)a0;
- (void).cxx_destruct;

@end
