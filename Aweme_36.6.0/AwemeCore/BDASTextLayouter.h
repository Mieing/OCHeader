@class UIBezierPath, NSAttributedString, NSArray;

@interface BDASTextLayouter : NSObject

@property (nonatomic) struct __CTFramesetter { } *framesetter;
@property (retain, nonatomic) NSAttributedString *attributedString;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) long long lineBreakMode;
@property (copy, nonatomic) NSAttributedString *truncationString;
@property (nonatomic) BOOL trailingWhitespaceLinesWhenTruncated;
@property (nonatomic) struct CGSize { double width; double height; } constrainedSize;
@property (copy, nonatomic) UIBezierPath *path;
@property (copy, nonatomic) NSArray *exclusionPaths;

- (id)initWithAttributedString:(id)a0 constraintSize:(struct CGSize { double x0; double x1; })a1;
- (id)layoutFrameWithStringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forceLayout:(BOOL)a1;
- (id)extendedLayoutPath:(BOOL *)a0;
- (void)discardFramesetter;
- (id)layoutFrameWithStringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithAttributedString:(id)a0;

@end
