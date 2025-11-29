@class NSString, RichTextView;

@interface WCAdDynamicFeedViewExtraClickJumpInfo : NSObject

@property (retain, nonatomic) NSString *richTextQuery;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } richTextRect;
@property (retain, nonatomic) RichTextView *richTextView;

- (void).cxx_destruct;

@end
