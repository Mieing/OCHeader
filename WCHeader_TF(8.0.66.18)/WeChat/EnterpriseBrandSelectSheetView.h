@class UIPageControl, NSString, CContact, NSArray, MMScrollView;
@protocol EnterpriseBrandSelectSheetViewDelegate;

@interface EnterpriseBrandSelectSheetView : MMUIView <UIScrollViewDelegate> {
    unsigned int _scene;
    CContact *_mainBrandContact;
    NSArray *_arySubContact;
    MMScrollView *_scrollView;
    UIPageControl *_pageControl;
    unsigned int _rowCount;
    unsigned int _colCount;
    unsigned int _pageCount;
    double _topMargin;
    double _rowMargin;
    double _colMargin;
    double _pageControlMargin;
    double _cellWidth;
    double _cellHeight;
}

@property (weak, nonatomic) id<EnterpriseBrandSelectSheetViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMainContact:(id)a0 scene:(unsigned int)a1;
- (void)initData;
- (void)layoutSubviews;
- (void)onPageControllerChangePage:(id)a0;
- (void)onIconClicked:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void).cxx_destruct;

@end
