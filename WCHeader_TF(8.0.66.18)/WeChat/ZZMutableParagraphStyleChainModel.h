@class NSMutableParagraphStyle;

@interface ZZMutableParagraphStyleChainModel : NSObject

@property (readonly, nonatomic) NSMutableParagraphStyle *object;
@property (readonly, copy, nonatomic) id /* block */ lineSpacing;
@property (readonly, copy, nonatomic) id /* block */ paragraphSpacing;
@property (readonly, copy, nonatomic) id /* block */ alignment;
@property (readonly, copy, nonatomic) id /* block */ firstLineHeadIndent;
@property (readonly, copy, nonatomic) id /* block */ headIndent;
@property (readonly, copy, nonatomic) id /* block */ tailIndent;
@property (readonly, copy, nonatomic) id /* block */ lineBreakMode;
@property (readonly, copy, nonatomic) id /* block */ minimumLineHeight;
@property (readonly, copy, nonatomic) id /* block */ maximumLineHeight;
@property (readonly, copy, nonatomic) id /* block */ baseWritingDirection;
@property (readonly, copy, nonatomic) id /* block */ lineHeightMultiple;
@property (readonly, copy, nonatomic) id /* block */ paragraphSpacingBefore;
@property (readonly, copy, nonatomic) id /* block */ hyphenationFactor;

- (id)initWithObject:(id)a0;
- (void).cxx_destruct;

@end
