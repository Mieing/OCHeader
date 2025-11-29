@class NSArray, NSMutableArray;

@interface IESGCPNavigatorToolView : UIView

@property (retain, nonatomic) NSMutableArray *itemViews;
@property (copy, nonatomic) NSArray *items;
@property (readonly, copy, nonatomic) NSArray *views;

- (void)removeCurrentSubviews;
- (void).cxx_destruct;
- (id)initWithItems:(id)a0;
- (void)reloadWithItems:(id)a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)setupSubviews;

@end
