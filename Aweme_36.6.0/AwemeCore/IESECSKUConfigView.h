@class NSArray, NSNumber, IESECLStackContainerView;

@interface IESECSKUConfigView : UIView

@property (retain, nonatomic) NSArray *contents;
@property (retain, nonatomic) NSNumber *height;
@property (nonatomic) BOOL alignRight;
@property (retain, nonatomic) IESECLStackContainerView *stackContainer;
@property (copy, nonatomic) id /* block */ onLayoutBlock;

- (void)configUI;
- (id)initWithContents:(id)a0 height:(id)a1 alignRight:(BOOL)a2;
- (void).cxx_destruct;

@end
