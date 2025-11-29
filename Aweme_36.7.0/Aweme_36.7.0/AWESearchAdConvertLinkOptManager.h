@class NSArray, NSDictionary, NSString, NSMutableDictionary, NSMutableSet;

@interface AWESearchAdConvertLinkOptManager : HTSService <AWESearchAdConvertLinkOptManager>

@property (nonatomic) BOOL forceIndirectSku;
@property (retain, nonatomic) NSDictionary *config;
@property (retain, nonatomic) NSArray *strategyList;
@property (copy, nonatomic) NSString *mode;
@property (retain, nonatomic) NSMutableDictionary *watchDurationDict;
@property (retain, nonatomic) NSMutableDictionary *playBackDict;
@property (retain, nonatomic) NSMutableSet *suitableCidSet;
@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSString *innerShortenMethod;
@property (copy, nonatomic) NSString *outerShortenMethod;
@property (nonatomic) long long watchDuration;
@property (nonatomic) long long playBackWatchDuration;
@property (copy, nonatomic) NSString *businessName;
@property (copy, nonatomic) NSString *actionName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)shouldShortenECLinkWithCid:(id)a0;
- (void)updateWatchDurationWithCid:(id)a0 playTime:(id)a1;
- (void)updatePlayBackTimeWithCid:(id)a0 playTime:(id)a1;
- (void)initSearchAdConvertLinkService;
- (void)deallocSearchAdConvertLinkService;
- (BOOL)canShortenConvertLink:(id)a0;
- (void)updateWatchDurationIfNeededWithCid:(id)a0 currStayTime:(double)a1;
- (id)modifyOpenURL:(id)a0 referString:(id)a1 cid:(id)a2 isOuter:(BOOL)a3;
- (void)initConfigParams;
- (void)registerCEPShortenECLinkAction;
- (void)unRegisterCEPShortenECLinkAction;
- (BOOL)meetWatchDurationCondition:(id)a0;
- (BOOL)meetPlayBackCondition:(id)a0;
- (BOOL)meetCEPCondition:(id)a0;
- (void)trackSearchAdCepTrace:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
