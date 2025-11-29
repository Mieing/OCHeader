@class NSString, AWESettingItemModel;

@interface AWEPrivacySettingFamiliarRecommendViewModel : AWEPrivacySettingBaseViewModel <AFDSettingSearchDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWESettingItemModel *recommendMeToFamiliarItem;
@property (retain, nonatomic) AWESettingItemModel *recommendFamiliarToMeItem;

+ (id)settingSearchRegisterDic;
+ (unsigned long long)itemStatusWithSettingItem:(id)a0;
+ (id)recommendMeToFamiliarTitle;
+ (id)recommendFamiliarToMeTitle;
+ (void)openRecommendDescriptionPage;
+ (id)pageDesc;
+ (id)pageDescHighlight;
+ (id)pageTitle;

- (void)willDisplayItemModel:(id)a0;
- (void)requestUserSetting:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)p_recommendFamiliarToMeStatus;
- (void)p_switchRecommendMeToFamiliar:(BOOL)a0;
- (void)p_switchRecommendFamiliarToMe:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
