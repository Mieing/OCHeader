@class NSString;

@interface AWEPlayInteractionDescriptionArticleController : NSObject <AWEPlayInteractionDescriptionRenderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)getDescriptionLabelTapActionWithContext:(id)a0;
- (void)didRenderDescriptionElement:(id)a0;
- (void)trackChallengeTitleShowIfNeeded:(id)a0;

@end
