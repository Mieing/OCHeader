@class IESIMMarkdownParseBlockResult, IESIMMdCodeBlockViewLayoutCache, IESIMMdCodeBlockViewRenderModel;

@interface IESIMMdCodeBlockViewRenderContext : NSObject

@property (retain, nonatomic) IESIMMarkdownParseBlockResult *codeBlock;
@property (retain, nonatomic) IESIMMdCodeBlockViewLayoutCache *layoutCache;
@property (retain, nonatomic) IESIMMdCodeBlockViewRenderModel *renderModel;
@property (nonatomic) struct CGSize { double width; double height; } attachmentSize;

- (void).cxx_destruct;

@end
