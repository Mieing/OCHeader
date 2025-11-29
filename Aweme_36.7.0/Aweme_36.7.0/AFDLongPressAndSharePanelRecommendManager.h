@class NSString;

@interface AFDLongPressAndSharePanelRecommendManager : NSObject <AFDLongPressAndSharePanelRecommendManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)longPressPanelRecommendItemText;
+ (id)familiarRecommendEntranceInPanelIconURLs:(BOOL)a0;
+ (BOOL)canShowRecommendItemWithParam:(id)a0;
+ (BOOL)canShowRecommendWithParam:(id)a0;
+ (BOOL)canShowCancelRecommendWithParam:(id)a0;
+ (BOOL)isBasicConditionEnableWithParam:(id)a0;
+ (BOOL)shouldHideRecommendItemForStoryWithParam:(id)a0;
+ (id)sharePanelRecommendItemImageWithModel:(id)a0 preferTheme:(long long)a1;
+ (id)sharePanelRecommendItemImageWithModel:(id)a0;
+ (id)sharePanelRecommendItemText;


@end
