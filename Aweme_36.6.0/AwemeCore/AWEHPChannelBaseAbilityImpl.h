@class AWEHPChannelBaseManager, NSString, AWEFeedChannelObject;

@interface AWEHPChannelBaseAbilityImpl : NSObject <AWEHPChannelBaseAbilityImplProtocol>

@property (weak, nonatomic) AWEHPChannelBaseManager *parentManager;
@property (weak, nonatomic) AWEFeedChannelObject *channel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasResumeTopTabUIDelay;
- (void)fetchSelectedChannelManagerUsingFilter:(id /* block */)a0 completion:(id /* block */)a1;
- (void)removeAllResourcesIfNeedBeforeChannelUnload;
- (void)didSelectedChannelFromChannel:(id)a0;
- (BOOL)enumerateParentChannelManagerUsingBlock:(id /* block */)a0;
- (void)performRunMessageReachResumeWithBlock:(id /* block */)a0;
- (void)performImmediatelyResumeBlock:(id /* block */)a0;
- (void)performBadgeBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
