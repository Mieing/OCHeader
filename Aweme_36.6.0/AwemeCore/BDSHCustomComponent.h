@class NSString;
@protocol BDSHCustomComponentProtocol;

@interface BDSHCustomComponent : BDSHViewComponent

@property (copy, nonatomic) NSString *extra;
@property (retain, nonatomic) id<BDSHCustomComponentProtocol> customComponent;

- (void)updateWithRenderNode:(void *)a0 engine:(id)a1;
- (id)initWithRenderNode:(void *)a0 engine:(id)a1;
- (void).cxx_destruct;
- (id)contentView;
- (void)dealloc;

@end
