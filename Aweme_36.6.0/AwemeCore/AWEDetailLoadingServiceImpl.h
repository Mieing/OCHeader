@class NSMutableArray, AWEUILoadingView;

@interface AWEDetailLoadingServiceImpl : NSObject <AWEDetailLoadingService>

@property (retain, nonatomic) NSMutableArray *loadingContainerArray;
@property (retain, nonatomic) AWEUILoadingView *loadingView;

- (void)enqueueLoadingInContainerView:(id)a0;
- (void)removeLoadingInContainerView:(id)a0;
- (void)p_updateLoadingStatus;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
