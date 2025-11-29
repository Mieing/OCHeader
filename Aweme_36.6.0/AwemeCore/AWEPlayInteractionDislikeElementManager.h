@class NSString;

@interface AWEPlayInteractionDislikeElementManager : NSObject <AWEPlayInteractionDislikeElementManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dislikeButtonText;
+ (BOOL)enablePanelDislikeOptimizationWithModel:(id)a0 referString:(id)a1;
+ (id)dislikeButtonTextForPanel:(id)a0;
+ (BOOL)shouldEnablePanelDislikeProgress;
+ (BOOL)autoScrollToNextAfterDislike;
+ (long long)notiType;
+ (id)dislikeButtonTitle;
+ (void)onOptimizedDislikeButtonClickedFinishedWithMethodType:(unsigned long long)a0 model:(id)a1 referString:(id)a2;
+ (id)dislikeWithDrawPanelTitleText;
+ (id)dislikeWithDrawPanelSubTitleText;
+ (id)dislikeButtonTextForCanWithDraw;
+ (id)textAfterDislike;
+ (BOOL)validSceneForPanelDislikeOptimization:(id)a0;
+ (void)withdratDislikeWithModel:(id)a0 referString:(id)a1;
+ (id)configsOptimization;
+ (id)dislikeWithDrawTagText;
+ (id)dislikeTagText;
+ (id)getDislikeTagView;
+ (BOOL)shouldOptimizedNewDislikeElement;
+ (BOOL)shouldEnableDislikeStyleOptimization;
+ (unsigned long long)dislikeIconStyleInOptimization;
+ (id)configs;


@end
