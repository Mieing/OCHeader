@class UIFont, UIColor, NSTextContainer, NSParagraphStyle;

@interface IESIMGrowingTextViewInitConfig : NSObject

@property (nonatomic) BOOL disableNestedScrollViewOpt;
@property (nonatomic) BOOL disableFixOverscroll;
@property (nonatomic) BOOL enableOptMaxAndMinLineAlgorithm;
@property (retain, nonatomic) NSTextContainer *textContainer;
@property (retain, nonatomic) NSParagraphStyle *contentParagraphStyle;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) int minNumberOfLines;
@property (nonatomic) int maxNumberOfLines;
@property (nonatomic) double minHeight;
@property (nonatomic) double maxHeight;
@property (retain, nonatomic) UIColor *placeholderColor;

- (void).cxx_destruct;
- (id)init;

@end
