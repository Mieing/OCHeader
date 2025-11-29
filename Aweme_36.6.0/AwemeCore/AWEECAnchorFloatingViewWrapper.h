@class NSDictionary, UIView;

@interface AWEECAnchorFloatingViewWrapper : NSObject

@property (copy, nonatomic) NSDictionary *trackedMap;
@property (nonatomic) long long sceneType;
@property (weak, nonatomic) UIView *floatingView;

- (BOOL)hasTrackedForTabID:(id)a0;
- (id)initWithView:(id)a0;
- (void).cxx_destruct;

@end
