@class NSString;

@interface AnnieX.AnnieXCommonSchemaProps : AnnieX.AnnieXCardSchemaProps {
    void /* unknown type, empty encoding */ __rts_disableInputScroll;
    void /* unknown type, empty encoding */ __rts_blockBackPress;
    void /* unknown type, empty encoding */ __rts_softInputMode;
    void /* unknown type, empty encoding */ __rts_isAdjustPan;
    void /* unknown type, empty encoding */ __rts_showError;
    void /* unknown type, empty encoding */ __rts_showLoading;
    void /* unknown type, empty encoding */ shouldFullScreen;
    void /* unknown type, empty encoding */ hideStatusBar;
    void /* unknown type, empty encoding */ transStatusBar;
    void /* function */ statusBarBgColor;
    void /* function */ statusBarColor;
    void /* function */ statusFontMode;
    void /* unknown type, empty encoding */ __rts_isWebDomainFirstParty;
}

@property (nonatomic) BOOL disableInputScroll;
@property (nonatomic) BOOL blockBackPress;
@property (nonatomic) long long softInputMode;
@property (nonatomic) BOOL isAdjustPan;
@property (nonatomic) BOOL showError;
@property (nonatomic) BOOL showLoading;
@property (nonatomic, copy) NSString *statusBarBgColor;
@property (nonatomic, copy) NSString *statusBarColor;
@property (nonatomic, copy) NSString *statusFontMode;
@property (nonatomic) BOOL isWebDomainFirstParty;

- (id)initWithCardSchemaBuilder:(id)a0;
- (id)init:(id)a0;
- (void).cxx_destruct;

@end
