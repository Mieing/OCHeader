@interface IESIMMultiTopFloatingTipsTrackerComponent : AWEIMComponentBase <IESIMMultiTopFloatingTipsTrackerInterface> {
    void /* unknown type, empty encoding */ conversation;
    void /* unknown type, empty encoding */ hasTrackedShowUniqueIds;
}

- (void)componentDidMounted:(id)a0;
- (void)trackBannerShowEventWithType:(id)a0 uniqueId:(id)a1;
- (void)trackBannerClickEventWithType:(id)a0 clickType:(id)a1;
- (void)trackBannerShowEventWithType:(id)a0 uniqueId:(id)a1 extraParams:(id)a2;
- (void)trackBannerClickEventWithType:(id)a0 clickType:(id)a1 extraParams:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
