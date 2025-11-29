@class CMStyleAttributes;

@interface CMTextAttributes : NSObject

@property (retain, nonatomic) CMStyleAttributes *baseTextAttributes;
@property (retain, nonatomic) CMStyleAttributes *h1Attributes;
@property (retain, nonatomic) CMStyleAttributes *h2Attributes;
@property (retain, nonatomic) CMStyleAttributes *h3Attributes;
@property (retain, nonatomic) CMStyleAttributes *h4Attributes;
@property (retain, nonatomic) CMStyleAttributes *h5Attributes;
@property (retain, nonatomic) CMStyleAttributes *h6Attributes;
@property (retain, nonatomic) CMStyleAttributes *paragraphAttributes;
@property (retain, nonatomic) CMStyleAttributes *emphasisAttributes;
@property (retain, nonatomic) CMStyleAttributes *strongAttributes;
@property (retain, nonatomic) CMStyleAttributes *linkAttributes;
@property (retain, nonatomic) CMStyleAttributes *imageParagraphAttributes;
@property (retain, nonatomic) CMStyleAttributes *codeBlockAttributes;
@property (retain, nonatomic) CMStyleAttributes *inlineCodeAttributes;
@property (retain, nonatomic) CMStyleAttributes *blockQuoteAttributes;
@property (retain, nonatomic) CMStyleAttributes *orderedListAttributes;
@property (retain, nonatomic) CMStyleAttributes *unorderedListAttributes;
@property (retain, nonatomic) CMStyleAttributes *orderedSublistAttributes;
@property (retain, nonatomic) CMStyleAttributes *unorderedSublistAttributes;
@property (retain, nonatomic) CMStyleAttributes *orderedListItemAttributes;
@property (retain, nonatomic) CMStyleAttributes *unorderedListItemAttributes;

- (id)attributesForHeaderLevel:(long long)a0;
- (void)updateAttributesForElementKinds:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)addStringAttributes:(id)a0 forElementWithKinds:(unsigned long long)a1;
- (void)addFontAttributes:(id)a0 forElementWithKinds:(unsigned long long)a1;
- (void)setFontTraits:(id)a0 forElementWithKinds:(unsigned long long)a1;
- (void)addParagraphStyleAttributes:(id)a0 forElementWithKinds:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
