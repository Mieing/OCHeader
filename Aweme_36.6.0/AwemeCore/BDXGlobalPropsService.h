@class NSString, BDXDefaultGlobalProps;

@interface BDXGlobalPropsService : NSObject <BDXGlobalPropsServiceProtocol>

@property (retain, nonatomic) BDXDefaultGlobalProps *defaultGlobalProps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (id)sharedInstance;
+ (unsigned long long)serviceType;
+ (void)setup;
+ (void)orientationDidChange;

- (id)containerGlobalPropsWhenLoadInMianThreadWithContainer:(id)a0;
- (id)containerGlobalPropsWhenLoadWithContainer:(id)a0;
- (id)containerGlobalPropsWhenLoadWihoutMainThreadWithContainer:(id)a0;
- (id)containerGlobalPropsWithCardModel:(id)a0;
- (void)updateScreenGlobalProps;
- (id)screenGlobalProps;
- (id)defaultGlobalPropsWithEngineType:(id)a0;
- (void)injectGlobalProps:(id)a0 toContainer:(id)a1;
- (id)dictFromGlobalProps:(id)a0;
- (BOOL)shouldUpdateScreenGlobalPropsWithContainer:(id)a0;
- (id)containerScreenGlobalPropsWithContainer:(id)a0;
- (void).cxx_destruct;

@end
