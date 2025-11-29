@class NSMutableDictionary, NSString, NSDate, NSMutableArray, BDWebSecureLinkCustomSetting;
@protocol BDWebSecureLinkRequestSecureCheckDelegate;

@interface BDWebSecureLinkManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *cacheSecueUrlDic;
@property (retain, nonatomic) NSMutableDictionary *cacheDangerUrlDic;
@property (retain, nonatomic) NSMutableDictionary *cacheGrayUrlDic;
@property (retain, nonatomic) NSMutableArray *errorList;
@property (retain, nonatomic) NSDate *errorOverwhelmingDate;
@property (nonatomic) long long cacheDuration;
@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSMutableArray *hostArray;
@property (nonatomic) unsigned long long hostArrayIndex;
@property (nonatomic) long long hostRetryTimes;
@property (nonatomic) BOOL allHostUnavailable;
@property (retain, nonatomic) id<BDWebSecureLinkRequestSecureCheckDelegate> paramsHandler;
@property (retain, nonatomic) BDWebSecureLinkCustomSetting *customSetting;

+ (id)paramsHandler;
+ (void)setParamsHandler:(id)a0;
+ (id)getHostDefaultArray;
+ (id)getDefaultHost;
+ (id)shareInstance;

- (id)commonParameters;
- (void)configSecureLinkDomain:(id)a0;
- (id)wrapToQuickMiddlePage:(id)a0 aid:(int)a1 scene:(id)a2 lang:(id)a3 risk:(int)a4;
- (BOOL)isSecureLink:(id)a0;
- (id)paramsWithWebView:(id)a0 url:(id)a1;
- (id)seclinkDomain;
- (void)switchSeclinkHost;
- (void)collectNormalEvent:(id)a0 data:(id)a1;
- (void)handleSecureLinkError:(unsigned long long)a0 errorCode:(long long)a1 errorMsg:(id)a2;
- (void)broadcastSecureLinkErrorTrigger;
- (void)collectSpecialEvent:(id)a0 data:(id)a1;
- (void)resetHostArrayIndex;
- (void)innerConfigSecureLinkDomain:(id)a0;
- (void)collectEvent:(id)a0 data:(id)a1 eventName:(id)a2;
- (void)updateCacheDuration:(long long)a0;
- (void)cacheSecureLink:(id)a0;
- (BOOL)isLinkInSecureLinkCache:(id)a0;
- (void)cacheDangerLink:(id)a0;
- (BOOL)isLinkInDangerLinkCache:(id)a0;
- (id)wrapToSecureLink:(id)a0 aid:(int)a1 scene:(id)a2 lang:(id)a3;
- (BOOL)isLinkPassForSecureLinkServiceErr;
- (void)onTriggerSecureLinkError:(unsigned long long)a0 errorCode:(long long)a1 errorMsg:(id)a2;
- (id)seclinkApi;
- (void)configSecureLinkHostArray:(id)a0;
- (void).cxx_destruct;

@end
