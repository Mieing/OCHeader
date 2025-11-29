@class NSString, AEKStickerResource, UIColor;

@interface AEKNewTextStickerClipDiffChangeImpl : NSObject <AEKNewTextStickerClipDiffChange>

@property (nonatomic) unsigned long long index;
@property (nonatomic) unsigned long long diffOptions;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) AEKStickerResource *font;
@property (nonatomic) double fontSize;
@property (nonatomic) double fontScale;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) long long align;
@property (nonatomic) long long textStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
