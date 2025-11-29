@class NSString;

@interface DiscoverEntranceSettingReporter : KvReportBaseItem

@property (copy, nonatomic) NSString *exposedItemsString;
@property (copy, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned long long action;
@property (nonatomic) unsigned long long entranceType;
@property (nonatomic) unsigned long long switchType;
@property (nonatomic) unsigned long long enterScene;

- (void)setExposedItems:(id)a0;
- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;
- (void)doReport;
- (void).cxx_destruct;

@end
