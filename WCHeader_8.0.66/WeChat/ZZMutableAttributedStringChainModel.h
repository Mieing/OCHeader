@class NSMutableAttributedString;

@interface ZZMutableAttributedStringChainModel : NSObject

@property (readonly, copy, nonatomic) id /* block */ pingFangRegular;
@property (readonly, copy, nonatomic) id /* block */ pingFangMedium;
@property (readonly, copy, nonatomic) id /* block */ mediumWechatStd;
@property (readonly, copy, nonatomic) id /* block */ regularWechatStd;
@property (readonly, copy, nonatomic) id /* block */ mediumWechatSS;
@property (readonly, copy, nonatomic) id /* block */ regularWechatSS;
@property (readonly, nonatomic) NSMutableAttributedString *object;
@property (readonly, copy, nonatomic) id /* block */ append;
@property (readonly, copy, nonatomic) id /* block */ insert;
@property (readonly, copy, nonatomic) id /* block */ replace;
@property (readonly, copy, nonatomic) id /* block */ remove;
@property (readonly, copy, nonatomic) id /* block */ appendImage;
@property (readonly, copy, nonatomic) id /* block */ appendString;
@property (readonly, copy, nonatomic) id /* block */ appendAttachment;
@property (readonly, copy, nonatomic) id /* block */ font;
@property (readonly, copy, nonatomic) id /* block */ foregroundColor;
@property (readonly, copy, nonatomic) id /* block */ paragraphStyle;
@property (readonly, copy, nonatomic) id /* block */ backgroundColor;
@property (readonly, copy, nonatomic) id /* block */ ligature;
@property (readonly, copy, nonatomic) id /* block */ kern;
@property (readonly, copy, nonatomic) id /* block */ strikethroughStyle;
@property (readonly, copy, nonatomic) id /* block */ strikethroughColor;
@property (readonly, copy, nonatomic) id /* block */ underlineStyle;
@property (readonly, copy, nonatomic) id /* block */ underlineColor;
@property (readonly, copy, nonatomic) id /* block */ strokeWidth;
@property (readonly, copy, nonatomic) id /* block */ strokeColor;
@property (readonly, copy, nonatomic) id /* block */ shadow;
@property (readonly, copy, nonatomic) id /* block */ textEffect;
@property (readonly, copy, nonatomic) id /* block */ baselineOffset;
@property (readonly, copy, nonatomic) id /* block */ obliqueness;
@property (readonly, copy, nonatomic) id /* block */ expansion;
@property (readonly, copy, nonatomic) id /* block */ writingDirection;
@property (readonly, copy, nonatomic) id /* block */ verticalGlyphForm;
@property (readonly, copy, nonatomic) id /* block */ link;
@property (readonly, copy, nonatomic) id /* block */ attachment;
@property (readonly, copy, nonatomic) id /* block */ fontWithRange;
@property (readonly, copy, nonatomic) id /* block */ foregroundColorWithRange;
@property (readonly, copy, nonatomic) id /* block */ paragraphStyleWithRange;
@property (readonly, copy, nonatomic) id /* block */ backgroundColorWithRange;
@property (readonly, copy, nonatomic) id /* block */ ligatureWithRange;
@property (readonly, copy, nonatomic) id /* block */ kernWithRange;
@property (readonly, copy, nonatomic) id /* block */ strikethroughStyleWithRange;
@property (readonly, copy, nonatomic) id /* block */ strikethroughColorWithRange;
@property (readonly, copy, nonatomic) id /* block */ underlineStyleWithRange;
@property (readonly, copy, nonatomic) id /* block */ underlineColorWithRange;
@property (readonly, copy, nonatomic) id /* block */ strokeWidthWithRange;
@property (readonly, copy, nonatomic) id /* block */ strokeColorWithRange;
@property (readonly, copy, nonatomic) id /* block */ shadowWithRange;
@property (readonly, copy, nonatomic) id /* block */ textEffectWithRange;
@property (readonly, copy, nonatomic) id /* block */ baselineOffsetWithRange;
@property (readonly, copy, nonatomic) id /* block */ obliquenessWithRange;
@property (readonly, copy, nonatomic) id /* block */ expansionWithRange;
@property (readonly, copy, nonatomic) id /* block */ writingDirectionWithRange;
@property (readonly, copy, nonatomic) id /* block */ verticalGlypFormhWithRange;
@property (readonly, copy, nonatomic) id /* block */ linkWithRange;
@property (readonly, copy, nonatomic) id /* block */ attachmentWithRange;

- (id)initWithObject:(id)a0;
- (id /* block */)verticalGlyphFormWithRange;
- (void).cxx_destruct;

@end
