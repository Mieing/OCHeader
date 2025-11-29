@class NSString;
@protocol IESGCPGeckoService;

@interface IESGCPGeckoServiceWarpper : NSObject <IESGCPGeckoService>

@property (retain, nonatomic) id<IESGCPGeckoService> injectService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)registerAccessKey:(id)a0 SDKVersion:(id)a1;
- (unsigned long long)packageVersionForAccessKey:(id)a0 channel:(id)a1;
- (id)rootDirForAccessKey:(id)a0 channel:(id)a1;
- (void)syncResourceWithAccessKey:(id)a0 channels:(id)a1 resourceVersion:(id)a2 isColdLaunch:(BOOL)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;

@end
