@class _TtC22SalamanderBDFoundation7SLColor;

@interface AnnieX.AnnieXCommonSchemaModel : AnnieX.AnnieXCardSchemaModel {
    void /* unknown type, empty encoding */ __rts_disableInputScroll;
    void /* unknown type, empty encoding */ __rts_blockBackPress;
    void /* unknown type, empty encoding */ __rts_softInputMode;
    void /* unknown type, empty encoding */ __rts_isAdjustPan;
    void /* unknown type, empty encoding */ __rts_shouldFullScreen;
    void /* unknown type, empty encoding */ __rts_hideStatusBar;
    void /* unknown type, empty encoding */ __rts_statusFontMode;
    void /* unknown type, empty encoding */ __rts_statusBarBgColor;
}

@property (nonatomic) BOOL disableInputScroll;
@property (nonatomic) BOOL blockBackPress;
@property (nonatomic) long long softInputMode;
@property (nonatomic) BOOL isAdjustPan;
@property (nonatomic) BOOL shouldFullScreen;
@property (nonatomic) BOOL hideStatusBar;
@property (nonatomic) int statusFontMode;
@property (nonatomic, retain) _TtC22SalamanderBDFoundation7SLColor *statusBarBgColor;

- (id)initWithProps:(id)a0;
- (id)init:(id)a0;
- (void).cxx_destruct;

@end
