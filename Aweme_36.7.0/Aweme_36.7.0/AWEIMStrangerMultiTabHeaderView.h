@class NSArray;
@protocol AWEIMStrangerMultiTabHeaderViewDelegate;

@interface AWEIMStrangerMultiTabHeaderView : UIView

@property (copy, nonatomic) NSArray *dataSource;
@property (copy, nonatomic) NSArray *tabViewArray;
@property (weak, nonatomic) id<AWEIMStrangerMultiTabHeaderViewDelegate> delegate;

+ (id)reuseIdentifier;

- (void)__buildTabViews;
- (void)__didClickTabView:(id)a0;
- (void)configWithDataArray:(id)a0;
- (void).cxx_destruct;
- (void)refresh;

@end
