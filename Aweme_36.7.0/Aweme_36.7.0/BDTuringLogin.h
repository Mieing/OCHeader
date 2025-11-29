@class BDTuringConfig, NSString, BDTuringLoginModel, NSMutableArray, BDTuringSettings;

@interface BDTuringLogin : NSObject <BDTuringVerifyService>

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *reportURL;
@property (copy, nonatomic) NSString *identityDomain;
@property (retain, nonatomic) BDTuringSettings *settings;
@property (retain, nonatomic) NSMutableArray *handlerArray;
@property (retain, nonatomic) BDTuringConfig *config;
@property (retain, nonatomic) BDTuringLoginModel *loginModel;
@property (copy) id /* block */ callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loginUtilWithWithConfig:(id)a0;
+ (id)loginUtilWithAppID:(id)a0;
+ (void)initialize;

- (void)bdturingLoginWithCallback:(id /* block */)a0;
- (void)bdturingStartForceLogin:(id)a0;
- (void).cxx_destruct;
- (void)addHandler:(id)a0;
- (id)initWithConfig:(id)a0;

@end
