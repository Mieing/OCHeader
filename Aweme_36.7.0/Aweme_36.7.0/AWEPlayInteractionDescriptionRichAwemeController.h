@class NSString;

@interface AWEPlayInteractionDescriptionRichAwemeController : NSObject <AWEPlayInteractionDescriptionParserProtocol, AWEPlayInteractionDescriptionRenderProtocol, AWEPlayInteractionDescriptionLifeCycleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;

- (id)handleDescriptionEmptyLine:(id)a0;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (id)advanceParserDescriptionWithContext:(id)a0;
- (id)parserAttributesForDescriptionWithContext:(id)a0;
- (BOOL)shouldReLayoutForRendererDidCalculateNumberOfLinesWithContext:(id)a0;
- (void)didRenderDescriptionElement:(id)a0;
- (void)viewController_willDisplayWithContext:(id)a0;
- (BOOL)isStoryWithModel:(id)a0;
- (BOOL)isSafeSubstringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forString:(id)a1;
- (void)trackMiniDetailTitleShowWithContext:(id)a0;
- (id)getRichAwemeTitleTextIfNeededWithContext:(id)a0;
- (id)insertCorrelationItemTagIfNeededWithContext:(id)a0;
- (void)adjustRichContentImagePosition:(id)a0;
- (BOOL)isRichAwemeCaptionWithTitle:(id)a0;

@end
