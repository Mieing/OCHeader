@class NSArray, NSAttributedString;

@interface AWETextRendererContext : NSObject

@property (copy, nonatomic) NSAttributedString *attributedText;
@property (copy, nonatomic) NSAttributedString *attributedTruncationText;
@property (nonatomic) unsigned long long maximumNumberOfLines;
@property (nonatomic) struct CGSize { double width; double height; } constrainedSize;
@property (copy, nonatomic) NSArray *exclusionPaths;
@property (nonatomic) long long lineBreakMode;

- (void).cxx_destruct;

@end
