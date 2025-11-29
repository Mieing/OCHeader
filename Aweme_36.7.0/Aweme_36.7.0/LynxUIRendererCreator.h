@class NSString;

@interface LynxUIRendererCreator : NSObject <LynxUIRendererCreatorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createUIRendererWithContext:(id)a0 containerView:(id)a1 builder:(id)a2 providerRegistry:(id)a3;

@end
