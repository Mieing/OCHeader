@class NSArray, NSAttributedString;

@interface FlowMarkdownX.FlowMdBuilderResult : NSObject {
    void /* function */ renderContent;
    void /* unknown type, empty encoding */ parseASTDuration;
    void /* unknown type, empty encoding */ formattingDuration;
}

@property (nonatomic, readonly) NSAttributedString *flatAttrStr;
@property (nonatomic, readonly) NSArray *renderContent;
@property (nonatomic) BOOL didIncrementalFormat;

- (id)initWithFlatAttrStr:(id)a0 renderContent:(id)a1;
- (id)prefixUpToAttributedString:(id)a0 offset:(long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
