@class BDTuringIdentityAlertTheme, NSString, BDTuringConfig, BDTuringSettings;
@protocol BDTuringIdentityHandler;

@interface BDTuringIdentity : NSObject <BDTuringVerifyService>

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *reportURL;
@property (copy, nonatomic) NSString *identityDomain;
@property (retain, nonatomic) BDTuringSettings *settings;
@property (retain, nonatomic) BDTuringConfig *config;
@property (retain, nonatomic) BDTuringIdentityAlertTheme *alertTheme;
@property (weak, nonatomic) id<BDTuringIdentityHandler> handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identityWithConfig:(id)a0;
+ (id)identityWithAppID:(id)a0;
+ (void)initialize;

- (void)popVerifyViewWithModel:(id)a0;
- (void)popIdentityViewWithModel:(id)a0 fromViewController:(id)a1;
- (id)withString:(id)a0 withColor:(id)a1 font:(id)a2;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
