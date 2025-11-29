@class NSString, NSMutableDictionary, NSDate;

@interface BDARifleViewProfiler : NSObject

@property (copy, nonatomic) NSString *cid;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) long long resHitType;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSMutableDictionary *loadingData;

- (double)timeIntervalSinceStartLoad;
- (void)templateBundleCreateFail:(id)a0;
- (void)paramsParseFinishedWihtCID:(id)a0 logExtra:(id)a1 renderType:(id)a2;
- (void)loadTemplateFinishedWithType:(long long)a0;
- (void)templateBundleState:(BOOL)a0;
- (void)sendErrorMsg2Slardar:(id)a0;
- (void)firstScreenFinished;
- (void)loadFailWithError:(id)a0;
- (void)sendLynxError:(id)a0;
- (void)runtimePrepareFinished;
- (void)loadBreak;
- (void)saveProfileData;
- (void)sendLoadData2EventV3;
- (void)sendLoadData2Slardar;
- (id)pageDataDictionary;
- (void)trackWithLabel:(id)a0 isSuccess:(BOOL)a1 errorMsg:(id)a2;
- (void).cxx_destruct;
- (id)initWithURLString:(id)a0;
- (void)dealloc;
- (void)loadSuccess;

@end
