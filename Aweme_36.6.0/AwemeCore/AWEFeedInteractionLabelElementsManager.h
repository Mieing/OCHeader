@class NSString;

@interface AWEFeedInteractionLabelElementsManager : NSObject <AWEFeedInteractionLabelElementsManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)uiConfigModelForFeedStandardLabel;
+ (BOOL)filterForRelationDynamicLabel:(long long)a0;
+ (BOOL)reverseEnable;
+ (BOOL)recommendReverseUnable;
+ (BOOL)reverseFromRecommend:(id)a0 businessID:(long long)a1;
+ (id)feedRelationLabelManagerUIStandardBlackList;
+ (id)getBalckListFromSettings;
+ (BOOL)feedStandardLabelUIABSettings;
+ (id)feedLabelManagerPageList;
+ (id)stringBlackListConfig;
+ (id)feedTagReverseIDDict;
+ (id)downgradeBlaclListConfig;
+ (BOOL)reverseTokenForFeedLabelShowWithReferString:(id)a0 andBusinessID:(long long)a1 model:(id)a2;
+ (id)relationLabelTypeBlackList;
+ (id)feedInteractionLabelReverseABSettings;
+ (id)defaultReverseBlackList;
+ (id)defaultDowngradeReverseBlackList;
+ (BOOL)shouldTagOfflineWithABKey:(id)a0 context:(id)a1;
+ (BOOL)enableComponentHideCtrl;
+ (BOOL)useNewStandardForTagWithReferString:(id)a0;
+ (BOOL)reverseTokenForFeedLabelShowWithReferString:(id)a0 andBusinessID:(long long)a1 relationType:(long long)a2 model:(id)a3;
+ (BOOL)shouldOfflineLabelWithBusinessID:(id)a0 context:(id)a1;
+ (BOOL)shouldOfflineLabelWithBusinessID:(id)a0 labelType:(long long)a1 context:(id)a2;
+ (BOOL)shouldOfflineTemplateLabelWithBusinessID:(id)a0 context:(id)a1;
+ (BOOL)shouldHideSocialGuideTagForRecWith:(id)a0 context:(id)a1;
+ (BOOL)shouldHideNormalTagForRecWith:(id)a0 context:(id)a1 businessID:(long long)a2 labelType:(id)a3;
+ (BOOL)shouldHideTemplateTagForRecWith:(id)a0 context:(id)a1 labelName:(id)a2;


@end
