@interface cmark_gfm_flow.CMarkParserOptions : NSObject {
    void /* unknown type, empty encoding */ disableLatexPairRule;
    void /* unknown type, empty encoding */ disableLatexDollarRule;
    void /* unknown type, empty encoding */ enableHtmlInlineFeature;
    void /* unknown type, empty encoding */ enableFormulaTrunc;
    void /* unknown type, empty encoding */ enableMarkLastStableNode;
    void /* unknown type, empty encoding */ enableAutolinkFilterChinese;
}

- (id)init;

@end
