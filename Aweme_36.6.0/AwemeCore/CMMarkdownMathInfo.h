@class UIFont, NSString, NSAttributedString, NSParagraphStyle;

@interface CMMarkdownMathInfo : NSObject

@property (nonatomic) BOOL multiLine;
@property (copy, nonatomic) NSAttributedString *origin;
@property (readonly, nonatomic) BOOL showInNewLine;
@property (readonly, copy, nonatomic) NSString *expression;
@property (readonly, nonatomic) UIFont *expFont;
@property (readonly, nonatomic) NSParagraphStyle *style;

- (void).cxx_destruct;

@end
