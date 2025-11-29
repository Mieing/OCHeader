@interface IESIMMarkdownParseComponent : AWEIMComponentBase <IESIMMarkdownParseComponentInterface> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_maxBubbleWidth;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (id)parseMarkdownWithContext:(id)a0;
- (id)parseMarkdownResultWithContext:(id)a0;
- (id)parseString:(id)a0 textColor:(id)a1;
- (id)parseString:(id)a0 textColor:(id)a1 diffFontSize:(id)a2;
- (void)optimizeForYYTextWithAttributedString:(id)a0;
- (void)optimizeForTextKit2WithAttributedString:(id)a0;
- (id)init;

@end
