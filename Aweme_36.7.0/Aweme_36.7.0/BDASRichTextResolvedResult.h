@class NSString, NSAttributedString, NSArray;

@interface BDASRichTextResolvedResult : NSObject

@property (copy, nonatomic) NSString *resolveAttachmentAttributeName;
@property (copy, nonatomic) NSAttributedString *resolvedAttributedString;
@property (copy, nonatomic) NSArray *resolvedActiveRanges;

- (void).cxx_destruct;

@end
