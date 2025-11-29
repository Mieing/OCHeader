@class NSDictionary, NSString, BDTuringVerifyModel;

@interface BDTuringParameterVerifyModel : BDTuringVerifyModel <BDTuringVerifyModelCreator>

@property (copy, nonatomic) NSDictionary *verifyData;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *verifyScene;
@property (retain, nonatomic) BDTuringVerifyModel *actualModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelWithParameter:(id)a0;
+ (BOOL)canHandleParameter:(id)a0;
+ (void)initialize;

- (BOOL)supportLandscape;
- (id)createVerifyView;
- (void)appendKVToQueryParameters:(id)a0;
- (void)appendKVToEventParameters:(id)a0;
- (void)configVerifyView:(id)a0;
- (void)loadVerifyView:(id)a0 withQuery:(id)a1;
- (void)appendCommonKVParameters:(id)a0;
- (id)appID;
- (void)setAppID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)plugin;
- (void)setRegionType:(long long)a0;
- (id)handlerName;

@end
