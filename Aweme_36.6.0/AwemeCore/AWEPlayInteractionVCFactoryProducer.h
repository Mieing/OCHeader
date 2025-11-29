@class NSString;

@interface AWEPlayInteractionVCFactoryProducer : NSObject <AWEPlayInteractionVCFactoryProducer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)defaultInteractionFactory;
+ (Class)storyInteractionFactory;
+ (Class)hotSpotInteractionFactory;
+ (Class)hotSpotTTArticleInteractionFactory;
+ (Class)specialCardTemplateInteractionFactory;
+ (Class)immersiveInteractionFactory;
+ (Class)playletRecommendInteractionFactory;


@end
