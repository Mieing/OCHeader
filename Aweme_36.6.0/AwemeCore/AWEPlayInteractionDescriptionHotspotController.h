@class NSString;

@interface AWEPlayInteractionDescriptionHotspotController : NSObject <AWEPlayInteractionDescriptionParserProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hotSpotTagColor;
- (id)parserTextExtraForDescriptionWithContext:(id)a0;
- (void)awe_trackHotSpotTagShow:(id)a0 parserContext:(id)a1;

@end
