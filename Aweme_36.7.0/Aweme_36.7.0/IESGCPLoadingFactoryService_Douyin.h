@class NSString;

@interface IESGCPLoadingFactoryService_Douyin : NSObject <IESGCPLoadingFactoryService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)showLoadingOnView:(id)a0;
- (id)showTransparentLoadingAndDisableUserInteractionOnView:(id)a0;
- (id)showDUXLoadingWithTitle:(id)a0;
- (void)hideDUXLoading:(id)a0;
- (id)showDUXLoadingWithTitle:(id)a0 onView:(id)a1;

@end
