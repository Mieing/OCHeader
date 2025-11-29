@class NSString, NSMutableAttributedString;

@interface FlowMarkdownX.FlowMdCodeBlockSource : FlowMarkdownX.FlowMdBlockSource {
    void /* function */ languageInfoStr;
    void /* function */ conversationID;
}

@property (nonatomic) BOOL hasCodeDidDisplay;
@property (nonatomic, copy) NSString *languageInfoStr;
@property (nonatomic, copy) NSString *conversationID;
@property (nonatomic, readonly) NSMutableAttributedString *codeAttrStr;
@property (nonatomic, readonly) NSString *renderString;

- (id)initWithCodeAttrStr:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
