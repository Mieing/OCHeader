@class NSString, ABKTextStickerShadowStyle, NSArray;

@interface ABKTextStickerStyle : NSObject

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *borderColor;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) ABKTextStickerShadowStyle *shadowStyle;
@property (copy, nonatomic) NSString *fontResourceId;
@property (copy, nonatomic) NSString *fontPath;
@property (nonatomic) long long fontSize;
@property (retain, nonatomic) NSArray *highLightStyles;

- (void).cxx_destruct;
- (id)init;

@end
