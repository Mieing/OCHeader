@interface AWESearchAIGCDeepThinkViewStyleConfig : NSObject

@property (nonatomic) BOOL bigFontEnabled;
@property (nonatomic) BOOL maxScaleLimit115;

+ (id)defaultConfig;

- (id)deepThinkTitleFont;
- (struct CGSize { double x0; double x1; })deepThinkIconSizeHasTittle:(BOOL)a0;
- (id)deepThinkNetModeTitleFont;
- (struct CGSize { double x0; double x1; })deepThinkNetModeArrowDownIconSize;
- (struct CGSize { double x0; double x1; })deepThinkNetModeSelectIconSize;
- (id)deepThinkNetModeSelectTitleFont;
- (id)deepThinkNetModeSelectSubTitleFont;
- (struct CGSize { double x0; double x1; })duxSizeWithOriginSize:(struct CGSize { double x0; double x1; })a0;
- (id)duxFontOriginSize:(double)a0 weight:(long long)a1;
- (id)init;

@end
