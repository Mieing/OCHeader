@class IESECGoodsCommentContext;

@interface IESECCommentLynxManager : NSObject

@property (retain, nonatomic) IESECGoodsCommentContext *context;

- (id)createViewWithLynxModel:(id)a0;
- (void)updateWithLynxModel:(id)a0 lynxView:(id)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (double)containerWidth;

@end
