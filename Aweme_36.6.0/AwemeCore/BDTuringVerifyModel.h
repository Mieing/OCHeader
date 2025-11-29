@class NSString, NSDictionary, BDTuringVerifyState;

@interface BDTuringVerifyModel : NSObject <BDTuringParameterModel>

@property (copy, nonatomic) NSString *appID;
@property (nonatomic) long long verifyType;
@property (copy, nonatomic) NSString *plugin;
@property (copy, nonatomic) NSString *region;
@property (nonatomic) long long showToast;
@property (copy, nonatomic) NSString *userID;
@property (retain, nonatomic) BDTuringVerifyState *state;
@property (copy, nonatomic) NSString *handlerName;
@property (nonatomic) BOOL supportLandscape;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *plugin;
@property (copy, nonatomic) NSString *region;
@property (nonatomic) long long showToast;
@property (nonatomic) long long verifyType;
@property (copy, nonatomic) NSString *userID;
@property (retain, nonatomic) BDTuringVerifyState *state;
@property (copy, nonatomic) NSString *handlerName;
@property (nonatomic) BOOL supportLandscape;
@property (nonatomic) long long regionType;
@property (copy) id /* block */ callback;
@property (nonatomic) BOOL hideLoading;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *ui_type;
@property (copy, nonatomic) NSString *subtype;
@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *detail;
@property (copy, nonatomic) NSString *shark_log_id;
@property (copy, nonatomic) NSString *templet_id;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) BOOL h5_popup;
@property (copy, nonatomic) NSDictionary *verifyData;
@property (copy, nonatomic) NSDictionary *replay_data;
@property (nonatomic) long long callType;

+ (id)preloadModel;
+ (id)parameterModelWithParameter:(id)a0;
+ (id)pictureModelWithCode:(long long)a0;
+ (id)modelWithParameter:(id)a0;
+ (id)smsModelWithScene:(id)a0;

- (void)handleResult:(id)a0;
- (void)handleResultStatus:(long long)a0;
- (id)createUniversalView;
- (void)loadUniversalView:(id)a0;
- (id)createVerifyView;
- (void)loadVerifyView:(id)a0;
- (void)appendKVToQueryParameters:(id)a0;
- (void)appendKVToEventParameters:(id)a0;
- (void)createState;
- (void)configVerifyView:(id)a0;
- (void)loadVerifyView:(id)a0 withQuery:(id)a1;
- (void)appendCommonKVParameters:(id)a0;
- (id)configQuery:(id)a0;
- (id)addPreloadQuery:(id)a0;
- (void)loadUniversalView:(id)a0 withQuery:(id)a1;
- (void)handleVerifyProtectAndCallback:(id /* block */)a0 result:(id)a1 appID:(id)a2;
- (void)notifyWithCallback:(id)a0 appID:(id)a1 callback:(id /* block */)a2 result:(id)a3;
- (void)notifyWithCallbackInner:(id)a0 postParameters:(id)a1 requestURL:(id)a2 appID:(id)a3 callback:(id /* block */)a4 result:(id)a5;
- (void).cxx_destruct;
- (id)init;

@end
