@class NSString;

@interface AWEPlayInteractionRightElementlHelper : NSObject <AWEPlayInteractionRightElementlHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showStringFromNumber:(id)a0;
+ (Class)aAWEPlayInteractionAdapterClass;
+ (void)updateRightInteractionElementsStyleWithExposeCollectionButtonPhase1Action:(id /* block */)a0;
+ (BOOL)shouldUseScreenAdaptationAction;
+ (BOOL)shouldShrinkRightInteractionElement;

- (id)aAWEPlayInteractionAdapter;

@end
