@class UIView;

@interface IESECGoodsFeedCommonGirdleRightComponent : NSObject

@property (retain, nonatomic) UIView *view;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (copy, nonatomic) id /* block */ layoutBlock;

+ (id)componentWithView:(id)a0 layoutBlock:(id /* block */)a1 updateBlock:(id /* block */)a2;

- (void)updateWithParameters:(id)a0;
- (void).cxx_destruct;
- (void)layout;

@end
