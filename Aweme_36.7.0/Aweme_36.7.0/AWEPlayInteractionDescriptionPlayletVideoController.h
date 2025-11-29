@class NSString;

@interface AWEPlayInteractionDescriptionPlayletVideoController : NSObject <AWEPlayInteractionDescriptionParserProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)parserAttributesForDescriptionWithContext:(id)a0;
- (id)mixNameFontForWeight:(long long)a0;
- (BOOL)shouldInsertMinorAlbumVideoTagWithReferString:(id)a0;
- (id)insertPlayletVideoTagIfNeededWithContext:(id)a0;
- (id)insertMinorAlbumVideoTagIfNeededWithContext:(id)a0;
- (BOOL)shouldInsertPlayletVideoTagWithModel:(id)a0;
- (id)insertTitle:(id)a0 attributedString:(id)a1 font:(long long)a2 isNeedVerticalLine:(BOOL)a3 parserContext:(id)a4;
- (id)insertTitle:(id)a0 attributedString:(id)a1 font:(long long)a2 isNeedVerticalLine:(BOOL)a3 atIndex:(unsigned long long)a4 parserContext:(id)a5;

@end
