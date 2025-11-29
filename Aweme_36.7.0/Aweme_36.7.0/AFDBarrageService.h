@class NSString;
@protocol AWEAwemeBarrageManagerProtocol;

@interface AFDBarrageService : HTSService <AFDBarrageService>

@property (readonly, nonatomic) id<AWEAwemeBarrageManagerProtocol> manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)bulletScreenAnchorManagerClass;
- (id)barrageFrame;
- (Class)barrageFrameClass;
- (id)createBarrageContainerView;
- (id)anchorModelWithAweme:(id)a0;

@end
