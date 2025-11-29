@class NSArray;

@interface AWEEnterpriseOperatingStatusConfigurationViewModel : AWESettingBaseViewModel {
    NSArray *_sectionDataArray;
}

- (void)switchNonFriendActiveStatus:(BOOL)a0;
- (void)switchRecentConsultedCount:(BOOL)a0;
- (id)__constructConfigurationItems;
- (id)__constructNonFriendActiveStatusItem;
- (id)__constructRecentConsultedCount;
- (void)__updateItemStatusWithType:(long long)a0;
- (BOOL)__itemStatusWithType:(long long)a0;
- (void)__handleNetworkFailedWithType:(long long)a0;
- (void)__requestChangeSwitchStatusWithType:(long long)a0 params:(id)a1 completion:(id /* block */)a2;
- (id)sectionDataArray;
- (void)setSectionDataArray:(id)a0;
- (void).cxx_destruct;

@end
