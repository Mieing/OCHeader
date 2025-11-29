@class NSString;

@interface AWEPlayInteractionDescriptionLongVideoController : NSObject <AWEPlayInteractionDescriptionParserProtocol, AWEPlayInteractionDescriptionRenderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)advanceParserDescriptionWithContext:(id)a0;

@end
