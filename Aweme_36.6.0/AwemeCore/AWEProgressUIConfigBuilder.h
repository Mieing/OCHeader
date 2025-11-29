@interface AWEProgressUIConfigBuilder : NSObject

+ (Class)aAWEBrandColorAdapterClass;
+ (id)sliderThemeColor;
+ (id)configsWithScene:(unsigned long long)a0 model:(id)a1 referString:(id)a2 outerContext:(id)a3;
+ (id)progressViewUIConfigWithScene:(unsigned long long)a0 model:(id)a1 referString:(id)a2 outerContext:(id)a3;
+ (id)decoratorViewStatusConfigWithScene:(unsigned long long)a0 model:(id)a1 referString:(id)a2 outerContext:(id)a3;
+ (id)timeIndicatorUIConfigWithScene:(unsigned long long)a0 model:(id)a1 referString:(id)a2;
+ (id)previewViewUIConfigWithScene:(unsigned long long)a0 model:(id)a1 referString:(id)a2;
+ (id)relatedVideoProgressViewConfigModel:(id)a0 referString:(id)a1 outerContext:(id)a2;
+ (id)relatedVideoTimeIndicatorUIConfigWithModel:(id)a0 referString:(id)a1;
+ (id)relatedVideoPreviewViewUIConfigModel:(id)a0 referString:(id)a1;
+ (id)relatedVideoDecoratorViewUIConfigWithModel:(id)a0 referString:(id)a1 outerContext:(id)a2;
+ (unsigned long long)decoratorBizType:(id)a0 referString:(id)a1 context:(id)a2;
+ (unsigned long long)decoratorTypeWithBiz:(unsigned long long)a0 model:(id)a1 referString:(id)a2 context:(id)a3;
+ (id)decoratorDotInfos:(id)a0 decoratorType:(unsigned long long)a1 bizType:(unsigned long long)a2;
+ (id)decoratorStatusConfig:(id)a0 decoratorType:(unsigned long long)a1 bizType:(unsigned long long)a2;
+ (BOOL)shouldShowTryWatchViewDot:(id)a0 referString:(id)a1 context:(id)a2;
+ (BOOL)shouldShowVideoHeadTailView:(id)a0 referString:(id)a1 context:(id)a2;
+ (id)dotInfoForTryWatchView:(id)a0;
+ (id)dotInfoForVideoHeadTailView:(id)a0;

- (id)aAWEBrandColorAdapter;

@end
