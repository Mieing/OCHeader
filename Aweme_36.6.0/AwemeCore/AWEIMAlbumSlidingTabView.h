@class UIStackView, NSArray, NSString, UIView;
@protocol AWEIMAlbumSlidingTabViewDelegate;

@interface AWEIMAlbumSlidingTabView : UIView <AWEIMAlbumSlidingTabItemViewDelegate>

@property (copy, nonatomic) NSArray *itemsArray;
@property (retain, nonatomic) UIStackView *horizontalStackView;
@property (retain, nonatomic) UIView *lineView;
@property (weak, nonatomic) id<AWEIMAlbumSlidingTabViewDelegate> delegate;
@property (nonatomic) long long selectIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupConstraints;
- (void)slidingTabItemDidClick:(id)a0;
- (void)p_setupViewsWithTitleArray:(id)a0;
- (double)p_screenWidth;
- (id)initWithTitleArray:(id)a0;
- (void)updateLineViewForScllviewDidScroll:(id)a0;
- (void).cxx_destruct;

@end
