@class NSString, UIView;
@protocol YataRenderObjectInterface;

@interface IESECSKUScrollToViewInstance : NSObject

@property (weak, nonatomic) id<YataRenderObjectInterface> anchorObject;
@property (weak, nonatomic) UIView *anchorView;
@property (nonatomic) BOOL doAnimation;
@property (copy, nonatomic) NSString *position;
@property (nonatomic) struct CGPoint { double x; double y; } offset;

- (void).cxx_destruct;

@end
