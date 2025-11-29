@class UIView;

@interface AWEStudioViewTransformManager : NSObject

@property (weak, nonatomic) UIView *view;
@property (readonly, nonatomic) double rotate;

+ (id)managerWithView:(id)a0;

- (void)transform_updateWithRotate:(double)a0;
- (void).cxx_destruct;

@end
