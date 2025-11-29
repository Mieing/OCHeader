@class IESLiveEmojiTextParser, NSParagraphStyle, IESLiveBadgeFactory;

@interface HTSLivePieceParser : NSObject

@property (retain, nonatomic) NSParagraphStyle *paragraphStyle;
@property (retain, nonatomic) IESLiveBadgeFactory *badgeFactory;
@property (retain, nonatomic) IESLiveEmojiTextParser *emoticonParser;

- (id)initWithDIContext:(id)a0;
- (double)getFontSize;
- (id)attributesWith:(id)a0 preferColor:(id)a1 config:(id)a2;
- (void)appendBadgeListIn:(id)a0 withBadgeList:(id)a1 rangeNum:(unsigned long long *)a2 rangeWidth:(unsigned long long *)a3 rangeHeight:(unsigned long long *)a4 showNewVipBadge:(BOOL)a5;
- (double)getFinalFontSizeWith:(id)a0 config:(id)a1;
- (id)getDiggImageWithColorString:(id)a0;
- (id)getFontFromFormat:(id)a0 config:(id)a1;
- (id)handleStringPiece:(id)a0 defaultFormat:(id)a1 configuration:(id)a2;
- (id)handleUserPiece:(id)a0 defaultFormat:(id)a1 configuration:(id)a2;
- (id)handleGiftPiece:(id)a0 defaultFormat:(id)a1 configuration:(id)a2;
- (id)handleHeartPiece:(id)a0 configuration:(id)a1;
- (id)handlePatternPiece:(id)a0 defaultFormat:(id)a1 configuration:(id)a2;
- (id)attributesWith:(id)a0 preferColor:(id)a1;
- (id)handleImagePiece:(id)a0 defaultFormat:(id)a1 configuration:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
