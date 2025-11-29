@interface AnnieX.AnnieXCommonSchemaBuilder : AnnieX.AnnieXCardSchemaBuilder {
    void /* unknown type, empty encoding */ __rts_showError;
    void /* unknown type, empty encoding */ __rts_showLoading;
    void /* unknown type, empty encoding */ __rts_softInputMode;
    void /* unknown type, empty encoding */ __rts_isAdjustPan;
    void /* unknown type, empty encoding */ __rts_disableInputScroll;
    void /* unknown type, empty encoding */ __rts_blockBackPress;
    void /* unknown type, empty encoding */ shouldFullScreen;
    void /* unknown type, empty encoding */ hideStatusBar;
    void /* unknown type, empty encoding */ transStatusBar;
    void /* unknown type, empty encoding */ statusBarBgColor;
    void /* unknown type, empty encoding */ statusBarColor;
    void /* unknown type, empty encoding */ statusFontMode;
    void /* unknown type, empty encoding */ __rts_isWebDomainFirstParty;
}

- (id)withDisableInputScroll:(BOOL)a0;
- (BOOL)getDisableInputScroll;
- (id)withSoftInputMode:(long long)a0;
- (long long)getSoftInputMode;
- (id)withShowError:(BOOL)a0;
- (BOOL)getShowError;
- (id)withShowLoading:(BOOL)a0;
- (BOOL)getShowLoading;
- (id)withIsAdjustPan:(BOOL)a0;
- (BOOL)getIsAdjustPan;
- (id)withStatusBarBgColor:(id)a0;
- (id)getStatusBarBgColor;
- (id)withStatusBarColor:(id)a0;
- (id)getStatusBarColor;
- (id)withStatusFontMode:(id)a0;
- (id)getStatusFontMode;
- (id)withBlockBackPress:(BOOL)a0;
- (BOOL)getBlockBackPress;
- (id)withIsWebDomainFirstParty:(BOOL)a0;
- (BOOL)getIsWebDomainFirstParty;
- (void).cxx_destruct;
- (id)build;
- (id)init;

@end
