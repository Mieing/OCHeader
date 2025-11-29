@class NSString;

@interface AWEPlayInteractionDescriptionChapterController : NSObject <AWEPlayInteractionDescriptionParserProtocol, AWEPlayInteractionDescriptionLifeCycleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;

- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (id)parserAttributesForDescriptionWithContext:(id)a0;
- (void)layoutElementViewWithContext:(id)a0;
- (BOOL)shouldInsertChapterTagForDenoise:(id)a0;
- (id)insertChapterTagForDenoise:(id)a0;
- (void)trackChapterTagShowForDenoise:(id)a0;

@end
