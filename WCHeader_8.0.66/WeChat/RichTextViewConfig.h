@class NSString, UIFont, UIColor;
@protocol RichTextLayoutDelegate;

@interface RichTextViewConfig : NSObject

@property (retain, nonatomic) NSString *prefixContent;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *parserString;
@property (retain, nonatomic) NSString *suffixContent;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) double fWidth;
@property (nonatomic) double lineSpacing;
@property (nonatomic) unsigned long long lineNumber;
@property (nonatomic) unsigned int linkTextVisiableLength;
@property (nonatomic) unsigned long long parserType;
@property (weak, nonatomic) id<RichTextLayoutDelegate> layoutDelegate;
@property (nonatomic) double originX;
@property (retain, nonatomic) UIColor *linkColor;
@property (retain, nonatomic) UIColor *linkHighlightColor;
@property (nonatomic) double rightIconPadding;
@property (nonatomic) BOOL useRedesignLinespacing;
@property (nonatomic) BOOL lineBreakByClipping;
@property (retain, nonatomic) NSString *truncatedTrailingLinkText;
@property (retain, nonatomic) NSString *truncatedTrailingLinkUrl;
@property (retain, nonatomic) UIColor *truncatedTrailingLinkColor;
@property (nonatomic) long long inlineVerticalAlign;
@property (retain, nonatomic) UIColor *textColor;

- (void).cxx_destruct;

@end
