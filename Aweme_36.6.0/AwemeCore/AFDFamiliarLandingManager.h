@class NSString, NSObject;
@protocol AFDMultiTabManagerProtocol;

@interface AFDFamiliarLandingManager : NSObject <AFDFamiliarLandingManagerProtocol>

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL needRefreshAfterLanding;
@property (retain, nonatomic) NSObject<AFDMultiTabManagerProtocol> *multiTabManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELiteUGSocialModuleAdapterClass;
+ (Class)aAFDServiceDOUYINLiteAdaperClass;
+ (Class)aAWELiteUGMainModuleAdapterClass;
+ (id)sharedInstance;

- (void)clearNeedRefreshAfterLanding;
- (void)landFamiliarTabWithExtraInfo:(id)a0 compeletion:(id /* block */)a1;
- (id)aAWELiteUGSocialModuleAdapter;
- (id)aAFDServiceDOUYINLiteAdaper;
- (id)aAWELiteUGMainModuleAdapter;
- (void)landFamiliarTabWithSubTabName:(id)a0 extraInfo:(id)a1 compeletion:(id /* block */)a2;
- (void)dealWithRouteInfoBeforeLanding:(id)a0;
- (void)dealWithRouteInfoAfterLanding:(id)a0;
- (void)setNeedRefreshAfterLandingWithRouteInfo:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
