@class IESIMMarkdownParseBlockResult, IESIMMdTableCollectionViewRenderModel, IESIMMdTableCollectionViewLayoutCache;

@interface IESIMMdTableCollectionViewRenderContext : NSObject

@property (retain, nonatomic) IESIMMarkdownParseBlockResult *tableBlock;
@property (retain, nonatomic) IESIMMdTableCollectionViewLayoutCache *layoutCache;
@property (retain, nonatomic) IESIMMdTableCollectionViewRenderModel *renderModel;
@property (nonatomic) struct CGSize { double width; double height; } attachmentSize;

- (void).cxx_destruct;

@end
