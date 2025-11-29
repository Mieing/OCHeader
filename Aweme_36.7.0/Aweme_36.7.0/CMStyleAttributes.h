@class NSMutableDictionary;

@interface CMStyleAttributes : NSObject <NSCopying>

@property (readonly) NSMutableDictionary *stringAttributes;
@property (readonly) NSMutableDictionary *fontAttributes;
@property (readonly) NSMutableDictionary *paragraphStyleAttributes;

- (id)initWithFontSymbolicTraits:(unsigned int)a0;
- (void)setFontSymbolicTraits:(unsigned int)a0;
- (id)initWithStringAttributes:(id)a0;
- (id)initWithParagraphStyleAttributes:(id)a0;
- (id)initWithStringAttributes:(id)a0 paragraphStyleAttributes:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
