@class AWEUILoadingView;

@interface AWETeenSearchGeneralLoadingView : UIView

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) BOOL isLoading;

- (void).cxx_destruct;
- (void)stopLoading;
- (void)beginLoading;

@end
