@class UIColor, NSMutableDictionary, UIFont, NSNumber;

@interface IESLiveLyricViewConfig : NSObject

@property (nonatomic) double normalFontSize;
@property (nonatomic) double focusFontSize;
@property (retain, nonatomic) UIColor *normalColor;
@property (retain, nonatomic) UIColor *normalSelectColor;
@property (retain, nonatomic) UIColor *focusColor;
@property (retain, nonatomic) UIColor *focusStartColor;
@property (retain, nonatomic) UIColor *focusEndColor;
@property (retain, nonatomic) UIColor *focusBGColor;
@property (nonatomic) double normalAlpha;
@property (nonatomic) double focusAlpha;
@property (nonatomic) double normalRowHeight;
@property (nonatomic) double focusRowHeight;
@property (nonatomic) long long lyricAlignment;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) double lyricComponentWidth;
@property (nonatomic) double lyricComponentXOffset;
@property (nonatomic) long long focusLine;
@property (nonatomic) BOOL disabledTextShadow;
@property (nonatomic) BOOL disabledAlignment;
@property (nonatomic) BOOL enableFocusTextShadow;
@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) BOOL maskLayerEnable;
@property (retain, nonatomic) NSMutableDictionary *singAttribute;
@property (retain, nonatomic) NSMutableDictionary *songAttribute;
@property (nonatomic) BOOL skipFirstLyricSentence;
@property (nonatomic) double lyricsWidthLimit;
@property (retain, nonatomic) NSMutableDictionary *singAttributePx;
@property (retain, nonatomic) NSMutableDictionary *singSelectAttributePx;
@property (retain, nonatomic) NSMutableDictionary *songAttributePx;
@property (retain, nonatomic) NSMutableDictionary *songBGAttributePx;
@property (retain, nonatomic) NSMutableDictionary *disableAttributePx;
@property (nonatomic) BOOL isMixKTVSingOptimize;
@property (nonatomic) BOOL enableEasyOut;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIFont *fontPX;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) NSNumber *strokeWidth;
@property (nonatomic) double borderWidth;
@property (nonatomic) BOOL isDoubleLineStyle;
@property (nonatomic) BOOL showNoLyric;
@property (nonatomic) struct CGSize { double width; double height; } renderSize;
@property (nonatomic) BOOL maskNormal;
@property (nonatomic) double partingFontSize;
@property (nonatomic) double focusScale;

+ (id)aiStageLyricViewConfigWithFont:(id)a0 fontSize:(double)a1 lyricComponentWidth:(double)a2 lyricAlignment:(long long)a3 numberOfLines:(unsigned long long)a4;
+ (id)configWithFocusColor:(id)a0 origin:(id)a1;
+ (id)dynamicBGLeftTopLyricConfig;
+ (id)dynamicBGRightBottomLyricConfig;
+ (id)componentLyricCoverConfig;
+ (id)partyKTVConfig;
+ (id)videoChorusLyricConfig;
+ (id)soloKTVLyricConfig;
+ (id)multiKTVLyricCoverConfig;
+ (id)defaultConfig;

- (double)getScale;
- (void)calcTextAttribute;
- (void)calcTextAttributePx:(float)a0;
- (id)getCommonAttr;
- (void)enumatePropertyUsingBlock:(id /* block */)a0;
- (double)getTextScale;
- (id)getSongAttribute;
- (void).cxx_destruct;
- (id)deepCopy;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
