@class NSArray, NSAttributedString, NSString;

@interface FlowMarkdownX.FlowMdViewLayoutInfo : NSObject {
    void /* function */ layoutInfo;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } totalSize;
@property (nonatomic, readonly) NSArray *layoutInfo;
@property (nonatomic, readonly) NSAttributedString *flatAttrStr;
@property (nonatomic, readonly) NSString *totalRenderString;

- (id)initWithTotalSize:(struct CGSize { double x0; double x1; })a0 layoutInfo:(id)a1 flatAttrStr:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
