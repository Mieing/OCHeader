@class NSArray, NSString;

@interface AWEPadReleasePagesAdapter : NSObject <AWEPadReleasePagesAdapter>

@property (nonatomic) BOOL isRegisterMemoryObserver;
@property (copy, nonatomic) id /* block */ shouldReleasePages;
@property (copy, nonatomic) NSArray *supportReleaseMiddlePagesScenes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;
+ (BOOL)enable;

- (void)startObserverMemory;
- (void)stopObserverMemory;
- (void)memoryLevelChanged:(id)a0;
- (void)performAction:(id /* block */)a0;
- (void).cxx_destruct;
- (id)weakTarget;

@end
