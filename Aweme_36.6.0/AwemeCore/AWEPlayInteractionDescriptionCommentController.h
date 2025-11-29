@class NSString;

@interface AWEPlayInteractionDescriptionCommentController : NSObject <AWEPlayInteractionDescriptionParserProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)parserAttributesForDescriptionWithContext:(id)a0;
- (id)insertOriginalAwemeIfNeededWithContext:(id)a0;
- (BOOL)shouldShowCommentPublishAwemeStyle:(id)a0;
- (id)originalAwemeTagAttachmentWithContext:(id)a0;
- (void)originalAwemeTagClickedWithContext:(id)a0;
- (id)titleAttributeWithContext:(id)a0;

@end
