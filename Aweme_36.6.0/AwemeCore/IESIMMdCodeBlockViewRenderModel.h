@class IESIMMarkdownParseBlockResult, NSString;

@interface IESIMMdCodeBlockViewRenderModel : NSObject

@property (retain, nonatomic) IESIMMarkdownParseBlockResult *codeBlock;
@property (nonatomic) double maxCellWidth;
@property (copy, nonatomic) NSString *title;

- (void).cxx_destruct;

@end
