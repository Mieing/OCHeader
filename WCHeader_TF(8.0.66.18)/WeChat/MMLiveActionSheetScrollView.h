@class NSMutableArray, UIView;
@protocol MMLiveActionSheetScrollViewDelegate;

@interface MMLiveActionSheetScrollView : UIScrollView

@property (retain, nonatomic) NSMutableArray *itemViewArray;
@property (weak, nonatomic) id<MMLiveActionSheetScrollViewDelegate> actionSheetDelegate;
@property (retain, nonatomic) UIView *customView;
@property (readonly, nonatomic) long long itemsCount;

- (void)reloadItems:(id)a0 itemDelegate:(id)a1;
- (BOOL)touchesShouldCancelInContentView:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
