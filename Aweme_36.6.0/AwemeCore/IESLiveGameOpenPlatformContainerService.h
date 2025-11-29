@class NSString, NSHashTable;

@interface IESLiveGameOpenPlatformContainerService : NSObject <IESLiveGameOpenPlatformContainerServiceInterface>

@property (retain, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)notifyContainerWithEvent:(id)a0 params:(id)a1;
- (id)initWithRoom:(id)a0 DIContext:(id)a1;
- (void).cxx_destruct;
- (id)addObserver:(id)a0;
- (void)removeObserver:(id)a0;

@end
