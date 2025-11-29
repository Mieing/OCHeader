@class AWEVideoPublishViewModel;
@protocol AWEGenericEffectMessageSender, IESServiceProvider;

@interface AWEGenericEffectMessageBaseHandler : NSObject

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<AWEGenericEffectMessageSender> messageSender;

- (id)bizIdentifier;
- (id)initWithServiceContainer:(id)a0 repository:(id)a1;
- (BOOL)canHandle:(id)a0 arg3Info:(id)a1;
- (void)handleMessage:(id)a0 arg3Info:(id)a1 isGlobal:(id)a2;
- (void).cxx_destruct;

@end
