@protocol AWETabListViewControllerDelegate, AWETabListViewControllerDataSource;

@interface AWETabListWeakReference : NSObject {
    BOOL didScrollFlag;
}

@property (weak, nonatomic) id<AWETabListViewControllerDelegate> delegate;
@property (weak, nonatomic) id<AWETabListViewControllerDataSource> dataSource;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 dataSource:(id)a1;

@end
