@class NSString;

@interface AWEPlayInteractionDescriptionSharePostController : NSObject <AWEPlayInteractionDescriptionParserProtocol, AWEPlayInteractionDescriptionLifeCycleProtocol>

@property (nonatomic) BOOL isCaptionEmpty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)advanceParserDescriptionWithContext:(id)a0;
- (id)parserAttributesForDescriptionWithContext:(id)a0;
- (BOOL)shouldShowSharePost:(id)a0;
- (BOOL)isNonPostscript:(id)a0;
- (BOOL)isSharePostComment:(id)a0;
- (BOOL)isSharePostLive:(id)a0;
- (id)insertSharePostTag:(id)a0;
- (id)contentString:(id)a0;

@end
