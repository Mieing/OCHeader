@class NSArray;

@interface FlowKitBizUI.FlowMixContainerLayoutInfo : NSObject {
    void /* function */ blockViewModels;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } totalSize;
@property (nonatomic, readonly) NSArray *blockViewModels;

- (id)initWithTotalSize:(struct CGSize { double x0; double x1; })a0 blockViewModels:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
