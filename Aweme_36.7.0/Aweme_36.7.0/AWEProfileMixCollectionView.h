@interface AWEProfileMixCollectionView : UICollectionView

@property (copy, nonatomic) id /* block */ leftLoadMoreHandle;
@property (nonatomic) BOOL fromHome;
@property (copy, nonatomic) id /* block */ contentSizeChangeHandler;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void).cxx_destruct;
- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (BOOL)accessibilityScroll:(long long)a0;

@end
