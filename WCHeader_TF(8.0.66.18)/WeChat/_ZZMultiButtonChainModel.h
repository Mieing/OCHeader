@class MMUIButton;

@interface _ZZMultiButtonChainModel : _ZZButtonChainModel

@property (readonly, copy, nonatomic) id /* block */ normalView;
@property (readonly, copy, nonatomic) id /* block */ touchDownView;
@property (readonly, nonatomic) MMUIButton *view;

+ (Class)viewClass;

- (id /* block */)touchDownViewWithMasonry;
- (id /* block */)normalViewWithMasonry;

@end
