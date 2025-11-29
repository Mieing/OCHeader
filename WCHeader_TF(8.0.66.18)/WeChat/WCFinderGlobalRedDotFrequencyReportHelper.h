@class WCFinderRedDotDictionaryHelper, WCFinderGlobalFrequencyClickInfo;
@protocol WCFinderGlobalRedDotFrequencyReportHelperDelegate;

@interface WCFinderGlobalRedDotFrequencyReportHelper : NSObject

@property (retain, nonatomic) WCFinderRedDotDictionaryHelper *reportDic;
@property (retain, nonatomic) WCFinderGlobalFrequencyClickInfo *lastClickEntryInfo;
@property (nonatomic) unsigned long long willAppearFindPageTimeStamp;
@property (nonatomic) unsigned long long willDisappearFindPageTimeStamp;
@property (nonatomic) long long enterBackgroundTimeStamp;
@property (weak, nonatomic) id<WCFinderGlobalRedDotFrequencyReportHelperDelegate> delegate;

+ (long long)getLastTabTypeFromPath:(id)a0 businessType:(unsigned long long)a1;
+ (id)getRedDotPathFromFindPageIdx:(long long)a0;
+ (BOOL)isSameBusinessFromPath:(id)a0 fromBusinessType:(unsigned long long)a1 toPath:(id)a2 toBusinessType:(unsigned long long)a3;
+ (id)entryPathArray;
+ (id)singleEntryPathArray;
+ (BOOL)isSingleEntryPath:(id)a0;
+ (long long)convertCalcReasonType:(long long)a0;

- (id)init;
- (void)dealloc;
- (void)addObserverForForegroundNotification;
- (void)onEnterBackground:(id)a0;
- (void)onEnterForeground:(id)a0;
- (void)addSingleEntryPath:(id)a0;
- (void)addMultiEntryPath:(id)a0;
- (unsigned long long)getBusinessTypeAtPath:(id)a0 lastTabType:(long long)a1;
- (long long)getCurrentTabTypeFromPath:(id)a0;
- (void)updateClickActionInfoAtIdx:(long long)a0 withRedDot:(BOOL)a1;
- (void)triggerReportAbortActionAtPath:(id)a0 businessType:(unsigned long long)a1;
- (void)updateReportCurrentInfoAtPath:(id)a0 businessType:(unsigned long long)a1;
- (void)loadFindPageEntryKeyDic;
- (void)resetReportDicInfo;
- (BOOL)clickFromBusiness;
- (void)updateEntryRedDotInfoWhenWillExpose;
- (void)updateEntryRedDotInfoWhenWillDisappear;
- (void)markReportData;
- (void)targetRedDotPathExpose:(id)a0;
- (void)updateTargetClickActionCleanTypeAtPath:(id)a0 businessType:(unsigned long long)a1 cleanAccType:(long long)a2;
- (void)triggerReportByClickBusiness:(BOOL)a0 reasonType:(long long)a1 shouldReset:(BOOL)a2;
- (void).cxx_destruct;

@end
