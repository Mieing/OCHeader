@class NSArray;
@protocol AWESearchHomeNewStyleTopContainerViewDelegate;

@interface AWESearchHomeNewStyleTopContainerView : UIView

@property (copy, nonatomic) NSArray *elementArray;
@property (weak, nonatomic) id<AWESearchHomeNewStyleTopContainerViewDelegate> delegate;

- (void)updateTheme:(unsigned long long)a0;
- (id)currentShowElement;
- (void)sendQuery:(id)a0;
- (void)willUpdateContainer;
- (id)setUpHistoryView;
- (void).cxx_destruct;
- (id)init;
- (void)inputViewWillAppear;
- (BOOL)shouldShow;
- (double)containerHeight;

@end
