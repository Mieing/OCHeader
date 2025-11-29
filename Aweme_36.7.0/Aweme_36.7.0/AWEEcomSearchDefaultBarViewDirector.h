@interface AWEEcomSearchDefaultBarViewDirector : AWEEcomSearchBarViewDirector

- (void)moveToPage:(long long)a0 fromPage:(long long)a1;
- (void)initStat:(long long)a0;
- (void)updateThemeForChange:(long long)a0;
- (void)privacyStateChanged:(id)a0;
- (void)updateShowMoreIconWithPage:(long long)a0;
- (void)updateBarViewBasedOnSettingsWithPage:(long long)a0;
- (void)updateSearchIcon:(long long)a0 state:(id)a1;
- (void)updateShowMoreIcon:(long long)a0;
- (void)updateBarViewInResultPage:(struct AWESearchStyleConfig { struct FrameStyle { id x0; double x1; } x0; struct ActionStyle { id x0; id x1; BOOL x2; } x1; struct ScanStyle { id x0; BOOL x1; } x2; struct ActionExtra { id x0; id x1; id x2; } x3; })a0;
- (void)refreshBarViewBaseOnSettings;

@end
