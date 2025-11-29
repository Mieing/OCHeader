@class NSString;

@interface AWEPlayInteractionElementContainerFactory : NSObject <AWEPlayInteractionElementContainerFactoryProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBottomContainerWithViewController:(id)a0 context:(id)a1;
+ (id)createDefaultBottomElementContainerProviderWithViewController:(id)a0 context:(id)a1;
+ (id)createLeftContainerWithViewController:(id)a0 context:(id)a1;
+ (id)createRightContainerWithViewController:(id)a0 context:(id)a1;
+ (id)createDefaultLeftElementContainerProviderWithViewController:(id)a0 context:(id)a1;


@end
