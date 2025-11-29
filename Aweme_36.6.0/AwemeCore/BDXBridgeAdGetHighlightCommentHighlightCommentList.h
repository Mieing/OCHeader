@class NSString;

@interface BDXBridgeAdGetHighlightCommentHighlightCommentList : BDXBridgeModel

@property (copy, nonatomic) NSString *originalText;
@property (copy, nonatomic) NSString *highlightText;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *feedbackId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
