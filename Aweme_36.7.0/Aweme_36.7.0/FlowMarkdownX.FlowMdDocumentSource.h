@class NSString, NSMutableAttributedString;

@interface FlowMarkdownX.FlowMdDocumentSource : FlowMarkdownX.FlowMdBlockSource

@property (nonatomic, readonly) NSMutableAttributedString *document;
@property (nonatomic, readonly) NSString *renderString;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDocument:(id)a0;

@end
