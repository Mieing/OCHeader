@class NSArray, LynxMarkdownDocument, NSDictionary, NSString, LynxMarkdownShadowNode;

@interface LynxMarkdownBundle : NSObject

@property (retain) LynxMarkdownDocument *document;
@property (nonatomic) int animation_type;
@property (nonatomic) int animation_step;
@property (nonatomic) BOOL content_complete;
@property (nonatomic) struct CGSize { double width; double height; } page_size;
@property (nonatomic) struct CGSize { double width; double height; } max_size;
@property (weak) LynxMarkdownShadowNode *node;
@property (retain, nonatomic) NSDictionary *links;
@property (retain, nonatomic) NSDictionary *fonts;
@property (retain, nonatomic) NSArray *subviews;
@property (retain, nonatomic) NSString *cursor_id;

- (void).cxx_destruct;
- (id)initWithBundle:(id)a0;

@end
