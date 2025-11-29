@class NSMutableArray;

@interface BDSHFlexComponent : BDSHViewComponent

@property (retain, nonatomic) NSMutableArray *children;

- (void)updateWithRenderNode:(void *)a0 engine:(id)a1;
- (void)updateVirtualNodeWithData:(const void *)a0;
- (void).cxx_destruct;

@end
