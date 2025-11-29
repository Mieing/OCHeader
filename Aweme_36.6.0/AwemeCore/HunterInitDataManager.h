@class NSString, NSMutableDictionary;

@interface HunterInitDataManager : NSObject <HunterContainerLifeCycleProtocol>

@property (retain, nonatomic) NSMutableDictionary *originData;
@property (retain, nonatomic) NSMutableDictionary *originDelegate;
@property (retain, nonatomic) NSMutableDictionary *completions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setInitDataWithURL:(id)a0 dataUsedOnceOnly:(id)a1;
+ (id)getInitDataWithURL:(id)a0;
+ (void)setInitLifecycleDelegateForURL:(id)a0 delegate:(id)a1;
+ (id)getInitLifecycleDelegateForURL:(id)a0;
+ (id)sharedInstance;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)preloadHunterContainer:(id)a0 forSchema:(id)a1 model:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;

@end
