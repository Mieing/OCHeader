@class NSString, NSMutableSet, NSMutableDictionary;

@interface AWEContentPreferenceFCManager : NSObject <AWEUserMessage, AWEContentPreferenceFCProtocol>

@property (retain, nonatomic) NSMutableSet *labelShownSet;
@property (retain, nonatomic) NSMutableSet *labelHiddenSet;
@property (retain, nonatomic) NSMutableDictionary *recordMap;
@property (nonatomic) BOOL forceShowTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (id)currentRecord;
- (id)storageKeyWithCurrentUid;
- (void)setupWithCurrentUser;
- (void)loadRecordMap;
- (void)cleanDataBefore14Days;
- (BOOL)checkWithModel:(id)a0 validGroup:(long long)a1;
- (void)storeRecordMap;
- (id)videoFromPreferenceTagDict;
- (id)videoFromPreferenceOptions;
- (id)dateStringWithDate:(id)a0;
- (id)realRecordMapKey;
- (long long)videoFromPreferenceGroup;
- (BOOL)canShowLabelElement:(id)a0;
- (void)addLabelShownCountIfNeeded:(id)a0;
- (void)addLabelHiddenCountIfNeeded:(id)a0;
- (void)setForceShowTag:(BOOL)a0 callTrace:(id)a1;
- (void)homepageHotDidRefresh;
- (void).cxx_destruct;
- (id)init;
- (void)resetCache;
- (id)currentDateString;

@end
