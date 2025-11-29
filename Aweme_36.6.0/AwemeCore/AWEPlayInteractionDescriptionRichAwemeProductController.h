@class NSString;

@interface AWEPlayInteractionDescriptionRichAwemeProductController : NSObject <AWEPlayInteractionDescriptionParserProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)parserAttributesForDescriptionWithContext:(id)a0;
- (id)insertProductLabelIfNeededWithContext:(id)a0;
- (id)titleAttributteWithContext:(id)a0;

@end
