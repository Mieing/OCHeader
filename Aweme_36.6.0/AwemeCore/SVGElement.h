@class SVGSVGElement, NSString, CSSStyleDeclaration;

@interface SVGElement : Element <SVGStylable>

@property (copy, nonatomic) NSString *stringValue;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *xmlbase;
@property (weak, nonatomic) SVGSVGElement *rootOfCurrentDocumentFragment;
@property (weak, nonatomic) SVGElement *viewportElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *className;
@property (retain, nonatomic) CSSStyleDeclaration *style;

+ (BOOL)shouldStoreContent;

- (id)getPresentationAttribute:(id)a0;
- (id)initWithLocalName:(id)a0 attributes:(id)a1;
- (id)initWithQualifiedName:(id)a0 inNameSpaceURI:(id)a1 attributes:(id)a2;
- (void)reCalculateAndSetViewportElementReferenceUsingFirstSVGAncestor:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })nextSelectorGroupFromText:(id)a0 startFrom:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })nextSelectorRangeFromText:(id)a0 startFrom:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)selector:(id)a0 appliesTo:(id)a1 specificity:(long long *)a2;
- (BOOL)styleRule:(id)a0 appliesTo:(id)a1 specificity:(long long *)a2;
- (id)getAttributeAsSVGLength:(id)a0;
- (id)cascadedValueForStylableProperty:(id)a0;
- (id)cascadedValueForStylableProperty:(id)a0 inherit:(BOOL)a1;
- (void)postProcessAttributesAddingErrorsTo:(id)a0;
- (void).cxx_destruct;
- (void)loadDefaults;
- (void)setParentNode:(id)a0;

@end
