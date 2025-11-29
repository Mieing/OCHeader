@class NSString;

@interface BDXBridgeBulletGetVisibleInfoMethodProvider : NSObject <BDXContainerBridgeProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)provideXbridgeMethodWithContext:(id)a0 container:(id)a1;
- (id)provideXbridgeMethodWithCardModel:(id)a0 container:(id)a1;

@end
