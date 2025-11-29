@class _TtC6WeChat16MagicLiveCardBiz, NSString;

@interface MagicLiveCardService : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) _TtC6WeChat16MagicLiveCardBiz *biz;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateData:(id)a0 frameSetName:(id)a1 rootId:(id)a2;
- (void)onServiceInit;
- (void)start;
- (void)pause;
- (void)resume;
- (id)frameSetViewForId:(id)a0;
- (BOOL)isFrameSetRootIdExist:(id)a0;
- (void)destroyFrameSetRoot:(id)a0;
- (void)destroyAllFrameSetRoot;
- (void)bindFrameSetView:(id)a0 withRootId:(id)a1;
- (void)stopIfNoFrameSetRoot;
- (void)stopDirectly;
- (id)addFrameSetRootWithLiveTask:(id)a0 extParams:(id)a1 type:(long long)a2 context:(id)a3;
- (void)checkPkgUpdate;
- (id)getBizPkgVersion;
- (id)getBizPkgInfo;
- (void).cxx_destruct;

@end
