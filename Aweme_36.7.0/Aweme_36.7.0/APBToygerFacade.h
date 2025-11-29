@class NSDate, NSString, APBToygerRemoteConfig, NSArray, NSMutableDictionary, APBToygerBioBisConfigManager, NSDictionary, NSMutableArray, UIViewController, APBToygerDataCenter;

@interface APBToygerFacade : NSObject <IBioAuthFactor>

@property (copy, nonatomic) NSString *factorName;
@property (weak, nonatomic) UIViewController *vc;
@property (retain, nonatomic) NSMutableArray *tasks;
@property (retain, nonatomic) NSMutableDictionary *pipeInfo;
@property (retain, nonatomic) APBToygerRemoteConfig *bisConfig;
@property (retain, nonatomic) APBToygerBioBisConfigManager *biocfgManager;
@property (retain, nonatomic) NSDictionary *extInfo;
@property (retain, nonatomic) NSArray *actionList;
@property (retain, nonatomic) NSArray *actionListStack;
@property (nonatomic) long long currentRetryCnt;
@property (retain, nonatomic) APBToygerDataCenter *dataCenter;
@property (nonatomic) double brightness;
@property (retain, nonatomic) NSDate *startTime;
@property (nonatomic) BOOL bIsCardFace;
@property (copy, nonatomic) NSString *fcToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getMetaInfo;
+ (id)getTokenid;
+ (void)setTokenid:(id)a0;
+ (id)getVersion;

- (id)getTasks;
- (id)getGlobalConfig;
- (void)finalizeResponse:(id)a0;
- (void)onEngineWillRestart:(id)a0;
- (id)getActionListfromeStack:(id)a0 RetryCnt:(long long)a1;
- (BOOL)isOCRFacade:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0;

@end
