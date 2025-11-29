@class UIColor, UIFont, NSParagraphStyle;

@interface AWEIMAssembleTextUIContextModel : NSObject

@property (nonatomic) BOOL isCompany;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) NSParagraphStyle *paragraphStyle;
@property (nonatomic) BOOL needUnderlineForRichText;
@property (retain, nonatomic) UIColor *highlightColorForRichText;
@property (nonatomic) BOOL needUnderlineForLinkAndPhone;
@property (retain, nonatomic) UIColor *highlightColorForLinkAndPhone;
@property (nonatomic) long long style;
@property (copy, nonatomic) id /* block */ tapActionBlock;

+ (id)paragraphStyleForTextLinkMessage;
+ (id)paragraphStyleForGroupNotice;
+ (id)highlightColorForGroupNotice;
+ (id)defaultContext;

- (void).cxx_destruct;

@end
