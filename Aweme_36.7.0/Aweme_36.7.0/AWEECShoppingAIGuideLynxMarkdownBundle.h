@class NSString, NSDictionary, AWEECShoppingAIGuideLynxMarkdownShadowNode;

@interface AWEECShoppingAIGuideLynxMarkdownBundle : NSObject

@property (nonatomic) BOOL isBold;
@property (nonatomic) unsigned long long fontSize;
@property (copy, nonatomic) NSString *fontColor;
@property (nonatomic) unsigned long long lineNumbers;
@property (nonatomic) BOOL useStdMarkdown;
@property (copy, nonatomic) NSDictionary *bizOptions;
@property (copy, nonatomic) NSDictionary *markdownStyle;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (nonatomic) unsigned long long typerVelocity;
@property (nonatomic) unsigned long long typerPosition;
@property (weak) AWEECShoppingAIGuideLynxMarkdownShadowNode *node;

- (void).cxx_destruct;
- (id)initWithBundle:(id)a0;

@end
