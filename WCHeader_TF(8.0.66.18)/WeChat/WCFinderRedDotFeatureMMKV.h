@class NSMutableArray, NSMutableDictionary;

@interface WCFinderRedDotFeatureMMKV : NSObject

@property (retain, nonatomic) NSMutableArray *openWXActionArray;
@property (retain, nonatomic) NSMutableArray *backgroundTsArray;
@property (retain, nonatomic) NSMutableArray *foregroundTsArray;
@property (retain, nonatomic) NSMutableDictionary *businessClickWithoutRedDotDic;
@property (retain, nonatomic) NSMutableDictionary *businessClickWithRedDotDic;
@property (retain, nonatomic) NSMutableDictionary *businessRedDotExposeTsDic;
@property (retain, nonatomic) NSMutableArray *findPageClickArray;
@property (retain, nonatomic) NSMutableArray *findPageExposeArray;
@property (retain, nonatomic) NSMutableArray *patch_openWXActionArray;
@property (retain, nonatomic) NSMutableArray *patch_backgroundTsArray;
@property (retain, nonatomic) NSMutableArray *patch_foregroundTsArray;

+ (long long)calcArrayContainer:(id)a0 intervalType:(int)a1;

- (id)defaultMMKVMapID;
- (id)getFeatureMMKV;
- (void)markOpenWXAction;
- (long long)getOpenWXActionBy:(int)a0;
- (void)markBackgroundAction;
- (long long)getBackgroundActionBy:(int)a0;
- (void)markForegroundAction;
- (long long)getForegroundActionBy:(int)a0;
- (void)markExitBusinessType:(int)a0;
- (double)getExitIntervalBusinessType:(int)a0;
- (void)markClickFindPageRedDotEnvironmentBusinessType:(int)a0 hasRedDot:(BOOL)a1;
- (void)markClickBusinessTypeWithoutRedDotType:(int)a0;
- (long long)getClickWithoutRedDotBusinessTypeFromType:(int)a0 intervalType:(int)a1;
- (void)markClickBusinessTypeWithRedDotType:(int)a0;
- (long long)getClickWithRedDotBusinessTypeFromType:(int)a0 intervalType:(int)a1;
- (void)markClickBusinessRedDotConsumeType:(int)a0;
- (long long)getLastBusinessRedDotConsumeFromType:(int)a0;
- (void)markBusinessRedDotExposeType:(int)a0;
- (long long)getLastBusinessRedDotExposeFromType:(int)a0;
- (long long)getBusinessRedDotExposeCountFromType:(int)a0 intervalType:(int)a1;
- (long long)getEarliestBusinessRedDotExposeTimeStamp;
- (void)markFindPageClickAction;
- (long long)getFindPageClickCountByIntervalType:(int)a0;
- (void)markFindPageExposeAction;
- (long long)getFindPageExposeCountByIntervalType:(int)a0;
- (void).cxx_destruct;

@end
