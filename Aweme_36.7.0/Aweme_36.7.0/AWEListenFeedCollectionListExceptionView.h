@class DUXVacantView;
@protocol AWEListenFeedCollectionListExceptionViewDelegate;

@interface AWEListenFeedCollectionListExceptionView : UIView

@property (retain, nonatomic) DUXVacantView *emptyExceptionView;
@property (retain, nonatomic) DUXVacantView *networkExceptionView;
@property (retain, nonatomic) DUXVacantView *loginExceptionView;
@property (weak, nonatomic) id<AWEListenFeedCollectionListExceptionViewDelegate> delegate;

- (void)updateExceptionViewWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setUpUI;

@end
