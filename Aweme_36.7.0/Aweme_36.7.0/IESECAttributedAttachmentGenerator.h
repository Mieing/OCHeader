@class UIFont, UIColor, NSString, UIImage;

@interface IESECAttributedAttachmentGenerator : NSObject <IESECAttributedGeneratorProtocol>

@property (readonly, copy, nonatomic) id /* block */ placeholder;
@property (retain, nonatomic) UIImage *contentImage;
@property (nonatomic) struct CGSize { double width; double height; } attachmentSize;
@property (nonatomic) double scaleFitWidth;
@property (nonatomic) double scaleFitHeight;
@property (retain, nonatomic) UIFont *alignFont;
@property (retain, nonatomic) UIFont *alignFontV2;
@property (nonatomic) double cornerRounds;
@property (retain, nonatomic) UIColor *imageTintColor;
@property (nonatomic) long long vAlignment;
@property (readonly, copy, nonatomic) id /* block */ image;
@property (readonly, copy, nonatomic) id /* block */ size;
@property (readonly, copy, nonatomic) id /* block */ fitHeight;
@property (readonly, copy, nonatomic) id /* block */ fitWidth;
@property (readonly, copy, nonatomic) id /* block */ roundCorners;
@property (readonly, copy, nonatomic) id /* block */ alignToFont;
@property (readonly, copy, nonatomic) id /* block */ alignToFontV2;
@property (readonly, copy, nonatomic) id /* block */ tintColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attributedStringWithAttachment:(id)a0 additionalAttributes:(id)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateBoundsBySize:(struct CGSize { double x0; double x1; })a0 fontAscender:(double)a1 fontDescender:(double)a2 vAlignment:(long long)a3;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateBoundsBySize:(struct CGSize { double x0; double x1; })a0 textHeight:(double)a1 vAlignment:(long long)a2;

- (id)generateAttributedString;
- (id)generateAsyncAttributedContent;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateAttachmentBoundsBySize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)init;

@end
