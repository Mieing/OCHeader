@interface IESIMMarkdownParseImp : HTSService <IESIMMarkdownParseInterface> {
    void /* unknown type, empty encoding */ supportCodeBlock;
}

- (id)parseMarkdownWithContext:(id)a0;
- (id)parseMarkdownResultWithContext:(id)a0;
- (id)parseString:(id)a0;
- (id)init;

@end
