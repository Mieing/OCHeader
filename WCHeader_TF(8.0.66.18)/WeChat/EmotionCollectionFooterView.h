@class NSString, EmoticonStoreFootView;
@protocol EmotionCollectionFooterViewDelegate;

@interface EmotionCollectionFooterView : UICollectionReusableView <MMRefreshTableFooterDelegate> {
    EmoticonStoreFootView *_footerView;
}

@property (weak, nonatomic) id<EmotionCollectionFooterViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)refreshCollectionViewDidScroll:(id)a0;
- (void)refreshCollectionViewDataSourceDidFinishedLoading:(id)a0;
- (void)onStateOfNormal;
- (void)onStateOfLoading;
- (void)onStateOfNoMoreData:(id)a0;
- (void)onStateOfNoData:(id)a0;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (void).cxx_destruct;

@end
