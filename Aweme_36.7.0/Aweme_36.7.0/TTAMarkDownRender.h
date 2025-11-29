@class CCMarkDownUIParameters, AWEECAIHTMLTextTransformer, NSMutableArray, CMYYTextRenderer, AWEECAIHTMLTitleTransformer, NSString, CMYYTextAttributes, TTAHTMLImgTransformer, AWEECAITransformerPreference, NSMutableOrderedSet, AWEECAIHTMLSearchTransformer, AWEECAIHTMLLoadingTransformer, AWEECAIHTMLRetryTransformer;
@protocol TTAMarkDownActionDelegate;

@interface TTAMarkDownRender : NSObject <CMAttributedStringRendererDelegate, CMYYTextRendererActionable>

@property (copy, nonatomic) NSString *oriStr;
@property (nonatomic) double maxWidth;
@property (retain, nonatomic) CCMarkDownUIParameters *uiParams;
@property (nonatomic) unsigned long long parseOption;
@property (retain, nonatomic) CMYYTextRenderer *textRenderer;
@property (retain, nonatomic) CMYYTextAttributes *attributes;
@property (retain, nonatomic) TTAHTMLImgTransformer *htmlImgTransformer;
@property (retain, nonatomic) AWEECAIHTMLTitleTransformer *titleTransformer;
@property (retain, nonatomic) AWEECAIHTMLSearchTransformer *searchTransformer;
@property (retain, nonatomic) AWEECAIHTMLRetryTransformer *retryTransformer;
@property (retain, nonatomic) AWEECAIHTMLLoadingTransformer *loadingTransformer;
@property (retain, nonatomic) AWEECAIHTMLTextTransformer *textTransformer;
@property (retain, nonatomic) NSMutableArray *imageViews;
@property (retain, nonatomic) NSMutableOrderedSet *imageUrlSet;
@property (weak, nonatomic) id<TTAMarkDownActionDelegate> actionDelegate;
@property (retain, nonatomic) AWEECAITransformerPreference *transformerPrefer;
@property (nonatomic) BOOL enableBoldFontMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)theme_otherHeadFont;
+ (double)theme_paragraphSpacing;
+ (id)theme_head1Font;
+ (id)theme_SmallFont;

- (id)initWithStr:(id)a0 maxWidth:(double)a1 uiParameters:(id)a2;
- (void)updateContent:(id)a0 maxWidth:(double)a1;
- (id)parseWithOption:(unsigned long long)a0;
- (id)renderer:(id)a0 insertHeaderPrefixWithLevel:(long long)a1 attributedDict:(id)a2;
- (id)renderer:(id)a0 transformImage:(id)a1 replaceText:(id)a2 isInImageParagraph:(BOOL)a3 attributedDict:(id)a4;
- (id)renderer:(id)a0 transformUnOrderList:(unsigned long long)a1 attributedDict:(id)a2;
- (id)renderer:(id)a0 transformOrderList:(long long)a1 sublistLevel:(unsigned long long)a2 attributedDict:(id)a3;
- (id)blockQuoteViewAttributes;
- (id)tableViewAttributes;
- (id)codeViewAttributes;
- (void)yyRenderer:(id)a0 linkText:(id)a1 linkClicked:(id)a2;
- (BOOL)renderConvertSingleNToParagraph;
- (id)generateDisorderFirstLevelIcon:(double)a0;
- (id)generateDisorderSecondLevelIcon:(double)a0;
- (id)generateDisorderThirdAnyLevelIcon:(double)a0;
- (id)imageViewWithUrl:(id)a0;
- (id)allImageUrlStrings;
- (id)parse;
- (void).cxx_destruct;
- (void)clear;

@end
