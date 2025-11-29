@class NSString;

@interface AWEPlayInteractionDescriptionLVideoWorkController : NSObject <AWEPlayInteractionDescriptionParserProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)parserTextExtraForDescriptionWithContext:(id)a0;
- (void)trackTitleExpandWithActionType:(id)a0 parserContext:(id)a1;

@end
