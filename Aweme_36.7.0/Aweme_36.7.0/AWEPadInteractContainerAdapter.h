@class NSString;

@interface AWEPadInteractContainerAdapter : HTSService <AWEPadInteractContainerProtocol>

@property (readonly, nonatomic) BOOL rightUIAdapterEnable;
@property (readonly, nonatomic) long long rightUIStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createElementContainerProviderFactoryWithViewController:(id)a0;
- (id)createPadRightElementLayout;

@end
