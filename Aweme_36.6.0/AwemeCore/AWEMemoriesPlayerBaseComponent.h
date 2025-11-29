@class AWEMemoriesPlayerControlManager, AWEMemoriesPlayerConfigManager, NSString, AWEMemoriesPlayerContext;
@protocol AWEMemoriesPlayerContainerService, IESServiceProvider;

@interface AWEMemoriesPlayerBaseComponent : NSObject <AWEMemoriesPlayerComponentProtocol>

@property (weak, nonatomic) id<IESServiceProvider> context;
@property (readonly, weak, nonatomic) id<AWEMemoriesPlayerContainerService> containerController;
@property (readonly, weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) AWEMemoriesPlayerContext *playerContext;
@property (retain, nonatomic) AWEMemoriesPlayerConfigManager *playerConfigManager;
@property (retain, nonatomic) AWEMemoriesPlayerControlManager *playerControlManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serviceBinding;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
