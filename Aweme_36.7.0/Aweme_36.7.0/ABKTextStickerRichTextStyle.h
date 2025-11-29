@class NSString, ABKTextStickerShadowStyle;

@interface ABKTextStickerRichTextStyle : NSObject <NSCopying>

@property (nonatomic) long long startIndex;
@property (nonatomic) long long endIndex;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *borderColor;
@property (copy, nonatomic) NSString *fontResourceId;
@property (copy, nonatomic) NSString *fontPath;
@property (nonatomic) long long fontSize;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) ABKTextStickerShadowStyle *shadowStyle;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
