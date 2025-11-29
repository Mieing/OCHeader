@class NSString, CMAttributedStringRenderer, CMYYTextAttributes, NSAttributedString, NSObject;
@protocol CMAttributedStringRendererDelegate, CMYYTextRendererActionable;

@interface CMYYTextRenderer : NSObject <CMAttributedStringRendererDelegate>

@property (copy, nonatomic) NSString *oriStr;
@property (retain, nonatomic) NSAttributedString *attributedString;
@property (retain, nonatomic) CMAttributedStringRenderer *renderer;
@property (weak, nonatomic) NSObject<CMYYTextRendererActionable> *actionDelegate;
@property (weak, nonatomic) NSObject<CMAttributedStringRendererDelegate> *rendererDelegate;
@property (retain, nonatomic) CMYYTextAttributes *attributes;

+ (void)applyStyleAndBreakLineToAttributeString:(id)a0 paragraphSpacing:(double)a1;

- (id)renderer:(id)a0 insertHeaderPrefixWithLevel:(long long)a1 attributedDict:(id)a2;
- (id)renderer:(id)a0 transformImage:(id)a1 replaceText:(id)a2 isInImageParagraph:(BOOL)a3 attributedDict:(id)a4;
- (id)renderer:(id)a0 transformBlockQuote:(id)a1;
- (id)renderer:(id)a0 transformUnOrderList:(unsigned long long)a1 attributedDict:(id)a2;
- (id)renderer:(id)a0 transformOrderList:(long long)a1 sublistLevel:(unsigned long long)a2 attributedDict:(id)a3;
- (id)renderer:(id)a0 transformLink:(id)a1;
- (void)registerHTMLElementTransformer:(id)a0;
- (id)paragraphTableTransformer;
- (BOOL)renderConvertSingleNToParagraph;
- (id)renderWithStr:(id)a0;
- (void).cxx_destruct;

@end
