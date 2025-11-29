@class NSDictionary, NSString;
@protocol AWELiveCheckDataManagerService;

@interface AWEECMallSubscribedLiveStatusManager : NSObject <AWELiveCheckDataManagerSubscriber>

@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) id<AWELiveCheckDataManagerService> liveCheckService;
@property (retain, nonatomic) NSDictionary *liveData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)onLiveUpdateReceive:(id)a0 PageType:(long long)a1;
- (void)subscribedLiveStatusChangeWithLiveData:(id)a0 statusChangeBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
