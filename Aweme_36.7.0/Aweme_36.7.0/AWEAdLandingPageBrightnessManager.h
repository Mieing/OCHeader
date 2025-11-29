@interface AWEAdLandingPageBrightnessManager : HTSService <AWEAdLandingPageBrightnessManager> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_oldBrightness;
    void /* unknown type, empty encoding */ $__lazy_storage_$_targetBrightness;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pitayaTargetBrightness;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pitayaCalculateOldBrightness;
    void /* unknown type, empty encoding */ $__lazy_storage_$_isChangeBrightness;
    void /* unknown type, empty encoding */ changeBrightnessModelAddress;
    void /* unknown type, empty encoding */ changeBrightnessViewControllerAddress;
    void /* unknown type, empty encoding */ $__lazy_storage_$_brightnessStrategyEnable;
    void /* unknown type, empty encoding */ $__lazy_storage_$_stableBrightnessStrategy;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pitayaBrightnessStrategy;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pitayaDolphinFeatureParams;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pitayaDolphinRawParams;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pitayaTaskEnable;
    void /* unknown type, empty encoding */ $__lazy_storage_$_changeBrightnessDuration;
}

- (void)pitayaRunTasksWithModel:(id)a0;
- (void)enterLandingPageWithModel:(id)a0 viewController:(id)a1;
- (void)exitLandingPageAndResetWithViewController:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
