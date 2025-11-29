@class NSString, NSMutableDictionary;

@interface IESLiveOfflineManager : NSObject <IESFalconCustomInterceptor>

@property (retain, nonatomic) NSMutableDictionary *runningRequests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)dataForPath:(id)a0 channel:(id)a1;
- (id)_gurdAccessKey;
- (id)geckoKey;
- (void)registerCustomInterceptor;
- (BOOL)enableCancelLazyRequest;
- (void)cancelLazyResourceRequest;
- (void)configGeckoAndFalcon;
- (void)updatePuzzleFalconPatterns;
- (id)_liveFalconPatterns;
- (id)_groupNames;
- (void).cxx_destruct;
- (id)init;
- (id)_groupName;

@end
