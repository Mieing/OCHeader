@class UIScrollView, NSMutableArray;
@protocol WCFinderFeedPickerTabViewDelegate;

@interface WCFinderFeedPickerTabView : MMUIView

@property (retain, nonatomic) NSMutableArray *tabButtons;
@property (retain, nonatomic) NSMutableArray *tabTitles;
@property (nonatomic) unsigned long long currentIndex;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) id<WCFinderFeedPickerTabViewDelegate> delegate;
@property (nonatomic) BOOL isUsingPlaneStyle;

- (id)initWithTabViewModels:(id)a0;
- (void)initViews;
- (void)layoutSubviews;
- (void)updateTabButtonState:(long long)a0;
- (void)updateButtonSelectedState:(unsigned long long)a0;
- (void)setButtonSelectedState:(unsigned long long)a0;
- (void)revertButtonSelectedState:(unsigned long long)a0;
- (void)selectIndex:(unsigned long long)a0;
- (void)tabButtonClicked:(id)a0;
- (void)tabButtonSelectedWithIndex:(long long)a0;
- (void).cxx_destruct;

@end
