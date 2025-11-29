@class NSString, WCTimeLineFooterView;
@protocol EditVideoBGMSearchResultCollectionViewFooterViewDelegate;

@interface EditVideoBGMSearchResultCollectionViewFooterView : UICollectionReusableView <MMRefreshTableFooterDelegate>

@property (retain, nonatomic) WCTimeLineFooterView *footerView;
@property (nonatomic) double heightLimit;
@property (weak, nonatomic) id<EditVideoBGMSearchResultCollectionViewFooterViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)getViewHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resetStatus:(unsigned long long)a0;
- (void)removeClickAction;
- (void)refreshScrollViewDidScroll:(id)a0;
- (void)refreshScrollViewDataSourceDidFinishedLoading:(id)a0;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (void).cxx_destruct;

@end
