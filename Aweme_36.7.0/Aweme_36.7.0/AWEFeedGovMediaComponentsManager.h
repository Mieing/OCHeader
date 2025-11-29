@class NSString, NSMutableArray, NSMutableDictionary;

@interface AWEFeedGovMediaComponentsManager : NSObject <AWEFeedGovMediaComponentsManagerProtocol>

@property (retain, nonatomic) NSMutableArray *limitItemIdArray;
@property (retain, nonatomic) NSMutableArray *exemptItemIdArray;
@property (retain, nonatomic) NSMutableDictionary *limitTrackRecord;
@property (retain, nonatomic) NSMutableDictionary *exemptTrackRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)govMediaOptimizeSwitch;
+ (BOOL)shouldLimitGovMediaComponents:(id)a0 withIdentifier:(id)a1;
+ (id)templateBottomBarIdentifierList;
+ (id)moduleIdentifierWhiteList;
+ (id)feedGovMediaComponentsConfig;
+ (BOOL)shouldLimitGovMediaComponents:(id)a0;
+ (BOOL)shouldLimitExemptTemplateBottomBarWithIdentifier:(id)a0 aweme:(id)a1;
+ (BOOL)shouldLimitExemptNormalBottomBarWithIdentifier:(id)a0 aweme:(id)a1;
+ (id)shareInstance;

- (void)exemptMonitor:(id)a0 withIdentifier:(id)a1;
- (void)limitMonitor:(id)a0 withIdentifier:(id)a1;
- (BOOL)trackRecordFilterWithItemID:(id)a0 componentID:(id)a1 isExempt:(BOOL)a2;
- (void)monitorHelper:(id)a0 withIdentifier:(id)a1 isExempt:(BOOL)a2;
- (void).cxx_destruct;

@end
