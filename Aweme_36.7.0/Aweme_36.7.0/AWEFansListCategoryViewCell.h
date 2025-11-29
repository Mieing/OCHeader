@class NSArray, NSString, UIScrollView, NSNumber;

@interface AWEFansListCategoryViewCell : UICollectionViewCell <UIScrollViewDelegate, AWEUserMessage>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (copy, nonatomic) NSArray *buttons;
@property (retain, nonatomic) NSNumber *followerCnt;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (nonatomic) BOOL isMine;
@property (nonatomic) BOOL forceHidenFollowerCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishBlockUser:(id)a0 status:(long long)a1 followStatus:(long long)a2 followerStatus:(long long)a3;
- (void)didFinishRemoveFansWithUser:(id)a0;
- (void)updateViewsWithCategorys:(id)a0 selected:(long long)a1;
- (id)categoryTitleWithType:(long long)a0;
- (id)followerCountString:(long long)a0;
- (id)__buildButtonWithString:(id)a0;
- (void)_updateButtonPadding;
- (void)selectCategory:(long long)a0;
- (void)_buttonDidClick:(id)a0;
- (void)decreaseFollowerCount;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;

@end
