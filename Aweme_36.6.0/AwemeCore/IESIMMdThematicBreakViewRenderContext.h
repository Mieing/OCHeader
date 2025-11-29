@class IESIMMarkdownParseBlockResult;

@interface IESIMMdThematicBreakViewRenderContext : NSObject

@property (retain, nonatomic) IESIMMarkdownParseBlockResult *thematicBreak;
@property (nonatomic) struct CGSize { double width; double height; } attachmentSize;

- (void).cxx_destruct;

@end
