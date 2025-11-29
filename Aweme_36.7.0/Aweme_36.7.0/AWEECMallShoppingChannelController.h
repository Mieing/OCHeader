@class NSString, NSDictionary, AWEECNewBottomMallViewController;
@protocol IESECMallChannelConfigProtocol;

@interface AWEECMallShoppingChannelController : NSObject <IESECMallChannelControllerProtocol>

@property (retain, nonatomic) AWEECNewBottomMallViewController *contentVC;
@property (copy, nonatomic) NSString *containerOpenTime;
@property (nonatomic) BOOL isSafeMode;
@property (copy, nonatomic) NSDictionary *lastFullSkinInfo;
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
- (void)channelDidLoad;
- (void)channelDidUnload;
- (void)configContainerRealOpenTime:(id)a0;
- (void)enterSafeMode;
- (void)mallFrameDidFinish:(id)a0;
- (void)scrapDefaultLandingPromise;
- (BOOL)channelIsLoaded;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
