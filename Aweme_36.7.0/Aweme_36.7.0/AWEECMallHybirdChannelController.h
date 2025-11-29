@class NSString, UIViewController;
@protocol IESECMallChannelViewControllerProtocol, IESECMallChannelConfigProtocol;

@interface AWEECMallHybirdChannelController : NSObject <AWEECMallContainerOptSceneProtocol, IESECMallChannelControllerProtocol>

@property (retain, nonatomic) UIViewController<IESECMallChannelViewControllerProtocol> *contentVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isFirstLaunchChannel;
@property (retain, nonatomic) id<IESECMallChannelConfigProtocol> config;

- (void)channelEnterWithModel:(id)a0;
- (void)channelLeaveWithModel:(id)a0;
- (id)getContentViewController;
- (void)preCreateContainer;
- (unsigned long long)p_needPreCreateContainer;
- (void)channelContextDidChange:(id)a0;
- (id)lynxTemplates;
- (void)trackPreloadTemplate:(BOOL)a0;
- (void)preDownloadTemplates;
- (void)channelDidLoad;
- (void)channelDidUnload;
- (void)configContainerRealOpenTime:(id)a0;
- (void)clearWhileMemoryDanger;
- (void)mallShoppingTabDidFirstScreen;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
