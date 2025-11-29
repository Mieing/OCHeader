@class NSString, NSArray, IESLiveStickerImageNewModel, IESLiveStickerFontConfigNew, NSNumber, NSDictionary;

@interface IESLiveStickerItemNewModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) NSNumber *textSize;
@property (readonly, nonatomic) NSNumber *stickerID;
@property (readonly, nonatomic) NSNumber *maxLength;
@property (readonly, copy, nonatomic) NSString *color;
@property (readonly, nonatomic) NSArray *inputRect;
@property (readonly, nonatomic) IESLiveStickerImageNewModel *image;
@property (readonly, nonatomic) NSArray *initialRect;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSNumber *x;
@property (retain, nonatomic) NSNumber *y;
@property (retain, nonatomic) NSNumber *w;
@property (retain, nonatomic) NSNumber *h;
@property (retain, nonatomic) NSNumber *textImageAdjustableStartPosition;
@property (retain, nonatomic) NSNumber *textImageAdjustableEndPosition;
@property (retain, nonatomic) IESLiveStickerFontConfigNew *fontConfig;
@property (retain, nonatomic) NSString *rectString;
@property (retain, nonatomic) NSString *centerString;
@property (nonatomic) struct CGPoint { double x; double y; } scaleCenter;
@property (nonatomic) struct CGPoint { double x; double y; } center;
@property (nonatomic, getter=isTextSticker) BOOL isTextSticker;
@property (nonatomic, getter=isImageSticker) BOOL isImageSticker;
@property (nonatomic) double xScaleFactor;
@property (nonatomic) double yScaleFactor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } textRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (readonly, copy, nonatomic) NSString *auditTextColor;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageJSONTransformer;
+ (id)fontConfigJSONTransformer;
+ (id)stickerIDJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
