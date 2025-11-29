@class NSString, ACCRepositoryProject, NSMapTable;

@interface ACCCreationChangeDispatcherCoordinator : NSObject <ACCCreationChangeDispatcherDelegate, ACCCreationChangeDispatcherSupport> {
    NSMapTable *m_map;
}

@property (weak, nonatomic) ACCRepositoryProject *project;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)totalObserversWithProtocol:(id)a0;
- (id)p_dispatcherForProtocol:(id)a0;
- (void)removeObserver:(id)a0 forProtocol:(id)a1;
- (id)changeDispatcherForProtocol:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver:(id)a0 forProtocol:(id)a1;

@end
