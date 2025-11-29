@class UIView;

@interface MMLiveViewDirtyHandle : NSObject

@property (nonatomic) BOOL isDirty;
@property (weak, nonatomic) UIView *rootView;

- (void)dirty;
- (void)forceLiveDirty;
- (void)notifyRefresh;
- (void).cxx_destruct;

@end
