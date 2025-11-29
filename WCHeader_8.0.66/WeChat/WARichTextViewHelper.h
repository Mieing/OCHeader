@class UIFont, NSString, UIColor, UIView, RichTextView;
@protocol WARichTextViewHelperDelegate;

@interface WARichTextViewHelper : NSObject <ILinkEventExt, IWARichTextViewHelper> {
    RichTextView *_internalView;
}

@property (retain, nonatomic) NSString *content;
@property (weak, nonatomic) id<WARichTextViewHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *internalView;
@property (nonatomic) BOOL isTouchesPassOn;
@property (nonatomic) BOOL shouldHandleLongPress;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) unsigned long long parserType;
@property (nonatomic) double maxWidth;
@property (nonatomic) double lineSpacing;
@property (nonatomic) double lineNumber;
@property (nonatomic) long long textAlignment;
@property (nonatomic) BOOL bHandleTextClick;
@property (retain, nonatomic) UIColor *linkColor;
@property (retain, nonatomic) NSString *truncatedTrailingLinkText;
@property (retain, nonatomic) UIColor *truncatedTrailingLinkColor;
@property (retain, nonatomic) NSString *truncatedTrailingLinkUrl;
@property (nonatomic) BOOL lineBreakByClipping;

- (id)init;
- (id)getContent;
- (void)setTruncatedTrailingContent:(id)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onTextClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)getHeightForContent:(id)a0 font:(id)a1 width:(double)a2 parserType:(unsigned long long)a3;
- (void).cxx_destruct;

@end
