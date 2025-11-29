@class NSAttributedString;

@interface IESLLCharacterRectModelBuilder : NSObject

@property (nonatomic) struct CGSize { double width; double height; } labelSize;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) long long textAlignment;
@property (copy, nonatomic) NSAttributedString *attributedText;

- (void).cxx_destruct;

@end
