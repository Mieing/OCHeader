@class IESLiveNewDressResourceManager, NSArray, NSString, IESLiveNewDressContainer, IESLiveNewDressDataManager;

@interface IESLiveNewDressServiceProxy : NSProxy <IESLiveNewDressService>

@property (retain, nonatomic) IESLiveNewDressContainer *container;
@property (retain, nonatomic) IESLiveNewDressDataManager *dataManager;
@property (retain, nonatomic) IESLiveNewDressResourceManager *resourceManager;
@property (retain, nonatomic) NSArray *targets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateDressContext:(id)a0;
- (void)handleNoSelector:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isProxy;
- (void)forwardInvocation:(id)a0;

@end
