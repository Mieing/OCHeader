@class NSString, NSMutableDictionary;
@protocol AWEUGCTopicServiceProtocol, AWEHotSpotPublishHelperDelegate;

@interface AWEUGCTopicEntrancePublishHelper : NSObject <AWEPublishTaskMessage, AWEHotSpotPublishHelperProtocol>

@property (retain, nonatomic) NSMutableDictionary *publishTaskMap;
@property (weak, nonatomic) id<AWEUGCTopicServiceProtocol> ugcService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEHotSpotPublishHelperDelegate> delegate;

+ (void)startShotWithPublishContext:(id)a0 completion:(id /* block */)a1;
+ (id)strategyForType:(unsigned long long)a0;
+ (void)startShotWithStrategy:(id)a0 publishContext:(id)a1 completion:(id /* block */)a2;

- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)markAllPublishTaskExpired;
- (void)showFloatingViewForPublishContext:(id)a0;
- (void)startShotWithStrategy:(id)a0 configParamsModel:(id)a1 isOuterFlow:(BOOL)a2;
- (void)insertCardTaskForPublishContext:(id)a0 withAweme:(id)a1;
- (void)removePublishContext:(id)a0;
- (void)startPublishWithShotContext:(id)a0;
- (BOOL)containerIsPublishingTaskForId:(id)a0;
- (void)startAlbumPageWithConfigParamsModel:(id)a0;
- (void)startTextInputPageWithConfigParamsModel:(id)a0;
- (void)startShotPageWithConfigParamsModel:(id)a0;
- (void)startTextEditPageWithConfigParamsModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
