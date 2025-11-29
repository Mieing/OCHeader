@class AWESearchSynthesisNovelBookSettingConfig, BDReaderLayoutConfig, BDReaderMonitorConfig, BDReaderTxtConfig, BDReaderOtherConfig, UIFont, BDReaderThemeConfig, NSString, UIColor;

@interface BDReaderConfig : NSObject

@property (weak, nonatomic) AWESearchSynthesisNovelBookSettingConfig *originBookSettingConfig;
@property (retain, nonatomic) BDReaderThemeConfig *themeConfig;
@property (retain, nonatomic) BDReaderLayoutConfig *layoutConfig;
@property (retain, nonatomic) BDReaderOtherConfig *otherConfig;
@property (retain, nonatomic) BDReaderMonitorConfig *monitorConfig;
@property (retain, nonatomic) BDReaderTxtConfig *txtConfig;
@property (nonatomic) unsigned long long pageMode;
@property (nonatomic) float autoReadRate;
@property (nonatomic) BOOL mirrorAlpha;
@property (copy, nonatomic) id /* block */ layoutConfigPageInsetBlock;
@property (copy, nonatomic) id /* block */ layoutConfigLineSpaceBlock;
@property (copy, nonatomic) id /* block */ layoutConfigParagraphSpaceBlock;
@property (copy, nonatomic) id /* block */ layoutConfigDefaultCssBlock;
@property (copy, nonatomic) id /* block */ layoutConfigContentAndTitleMarginBlock;
@property (copy, nonatomic) id /* block */ layoutConfigFontBlock;
@property (copy, nonatomic) id /* block */ loadEpubCssBlock;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) UIColor *linkTextColor;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) UIFont *textFont;
@property (readonly, nonatomic) UIFont *titleFont;
@property (readonly, nonatomic) double textFontSize;
@property (readonly, nonatomic) double titleFontSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } currentPageSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } currentPageFrame;
@property (readonly, nonatomic) double lineSpace;
@property (readonly, nonatomic) double paragraphSpace;
@property (readonly, nonatomic) double characterSpace;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } pageInset;
@property (readonly, nonatomic) BOOL autoFirstLineHeadIndent;
@property (readonly, nonatomic) double marginBetweenTitleAndTop;
@property (readonly, nonatomic) double marginBetweenContentAndTitle;
@property (nonatomic) BOOL isAddDamp;
@property (nonatomic) double damp;
@property (nonatomic) BOOL captureAllGuard;
@property (nonatomic) double captureUnloadInter;
@property (nonatomic) unsigned long long backgroundType;
@property (readonly, copy, nonatomic) NSString *bgTypeStr;

+ (id)defaultConfig;

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
