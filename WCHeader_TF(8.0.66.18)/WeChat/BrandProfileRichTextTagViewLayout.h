@class NSString;

@interface BrandProfileRichTextTagViewLayout : NSObject <RichTextLayoutDelegate>

@property (nonatomic) BOOL hasTag;
@property (nonatomic) struct CGSize { double width; double height; } tagImageSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)lineWidthAtY:(double)a0 lineIndex:(long long)a1 richTextView:(id)a2;

@end
