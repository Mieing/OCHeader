@class NSArray, UICollectionView, AWEStoryColor, NSString;

@interface AWEStoryColorChooseView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, AWEStoryColorChooseViewProtocol>

@property (readonly, nonatomic) NSArray *storyColors;
@property (copy, nonatomic) id /* block */ didSelectedColorBlock;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEStoryColor *selectedColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)storyColors;

- (void)selectWithIndexPath:(id)a0;
- (void)selectWithColor:(id)a0;
- (void)clearSelectColor;
- (void)updateSelectedColorWithIndexPath:(id)a0;
- (void)selectColorWithoutCallBack:(id)a0;
- (BOOL)isColor:(id)a0 equalTo:(id)a1;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
