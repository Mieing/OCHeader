@class UIFont, NSString, UIColor, NSAttributedString;

@interface AWERLVirtualLabel : AWERLVirtualView <AWERLVirtualViewOverride>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long lineBreakMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerAutoSyncAttributeKeyPathPairs:(id)a0;

- (void)debugBuildDescriptions:(id)a0;
- (id)textColor:(id)a0;
- (id)text:(id)a0;
- (id)numberOfLines:(long long)a0;
- (id)font:(id)a0;
- (id)textAlignment:(long long)a0;
- (id)attributedText:(id)a0;
- (struct CGSize { double x0; double x1; })layoutThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)createViewToRender;
- (void)updateAttributesForRenderedView:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithText:(id)a0;
- (id)identifier;
- (id)lineBreakMode:(long long)a0;

@end
