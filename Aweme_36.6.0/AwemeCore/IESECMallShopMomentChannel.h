@class IESECMallShopMomentViewController, NSString, IESECMallShopMomentContext;
@protocol IESECMallChannelConfigProtocol;

@interface IESECMallShopMomentChannel : NSObject <IESECMallChannelControllerProtocol>

@property (retain, nonatomic) IESECMallShopMomentContext *context;
@property (retain, nonatomic) IESECMallShopMomentViewController *vc;
@property (nonatomic) BOOL isFirstLaunchChannel;
@property (retain, nonatomic) id<IESECMallChannelConfigProtocol> config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)channelEnterWithModel:(id)a0;
- (void)channelLeaveWithModel:(id)a0;
- (id)getContentViewController;
- (void)channelContextDidChange:(id)a0;
- (void)configContainerRealOpenTime:(id)a0;
- (void)clearWhileMemoryDanger;
- (void)mallShoppingTabDidFirstScreen;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
