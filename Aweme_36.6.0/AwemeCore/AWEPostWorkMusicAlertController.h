@class NSString;

@interface AWEPostWorkMusicAlertController : AWEPostWorkBaseController <AWEPostWorkMusicAlertProtocol, AWEPublishTaskMessage>

@property (nonatomic) BOOL hasAddReplaceMusicAlert;
@property (nonatomic) BOOL needReloadAfterChangeMusicEditStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)replaceMusicPublishProgressWithTask:(id)a0 taskStatus:(long long)a1;
- (void)containerViewWillAppear:(BOOL)a0;
- (void)containerViewDidAppear:(BOOL)a0;
- (id)awemeModelWithID:(id)a0;
- (void)addReplaceMusicAlertIfNeed;
- (void)syncAwemeData:(id)a0;
- (void)addReplaceMusicAlertIfNeeded:(id /* block */)a0;
- (void)handleReplaceMusicStatus:(long long)a0 aweme:(id)a1;
- (void)fetchStoryList:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)containerViewDidLoad;

@end
