@protocol UITableViewDelegate, UITableViewDataSource;

@interface IESLiveTableViewSectionAdapterProxy : NSProxy

@property (weak, nonatomic) id<UITableViewDelegate> delegate;
@property (weak, nonatomic) id<UITableViewDataSource> dataSource;
@property (weak, nonatomic) id target;

- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
