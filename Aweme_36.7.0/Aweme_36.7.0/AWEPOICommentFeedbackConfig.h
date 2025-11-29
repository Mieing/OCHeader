@class UIColor, UIFont;

@interface AWEPOICommentFeedbackConfig : NSObject

@property (nonatomic) unsigned long long contentType;
@property (nonatomic) unsigned long long contentMode;
@property (nonatomic) unsigned long long themeStyle;
@property (nonatomic) unsigned long long hostType;
@property (nonatomic) BOOL impactEnabled;
@property (nonatomic) BOOL animationEnabled;
@property (nonatomic) BOOL layerBorderEnabled;
@property (nonatomic) BOOL adaptForCommentTab;
@property (nonatomic) BOOL hideTextEnabled;
@property (retain, nonatomic) UIColor *diggedTextColor;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } innerInset;
@property (nonatomic) double itemSpacing;
@property (nonatomic) double innerSpacing;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) BOOL groupEnabled;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } groupInset;
@property (nonatomic) double groupCornerRadius;
@property (retain, nonatomic) UIColor *groupBorderColor;
@property (nonatomic) double groupBorderWidth;
@property (nonatomic) double fixedWidth;

+ (id)rateInCommentConfig;
+ (id)rateConfig;
+ (id)rateInGroupConfig;
+ (id)rateInCommentOptConfig;
+ (id)rateInPhotosPreviewConfigWithType:(unsigned long long)a0;

- (BOOL)hasDislikeExistInFeedback;
- (void).cxx_destruct;

@end
