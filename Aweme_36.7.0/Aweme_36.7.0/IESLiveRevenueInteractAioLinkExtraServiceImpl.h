@class NSString;

@interface IESLiveRevenueInteractAioLinkExtraServiceImpl : NSObject <IESLiveAioLinkRevlinkExtraService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithDIContext:(id)a0;
- (void)showTipsOnPkIcon:(id)a0;
- (void)dismissNativePanel:(int)a0;
- (void)openPanel:(int)a0;

@end
