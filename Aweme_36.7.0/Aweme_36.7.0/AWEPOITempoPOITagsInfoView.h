@class UIScrollView, NSMutableArray, NSString;

@interface AWEPOITempoPOITagsInfoView : UIView <UIScrollViewDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) NSMutableArray *stackViews;
@property (nonatomic) long long tagsRowHeight;
@property (nonatomic) long long itemsMargin;
@property (nonatomic) long long rowsMargin;
@property (retain, nonatomic) NSMutableArray *hasExposedIDs;
@property (copy, nonatomic) id /* block */ onTagExposure;
@property (copy, nonatomic) id /* block */ onTagClick;
@property (copy, nonatomic) id /* block */ onTagViewScroll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)frameDidChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configTagView:(id)a0 model:(id)a1 scene:(id)a2;
- (void)updateUIWithNumberOfRows:(long long)a0 widestRow:(long long)a1 tagViews:(id)a2;
- (void)configWithTagModels:(id)a0 rowsMargin:(long long)a1 itemsMargin:(long long)a2 tagsRowHeight:(long long)a3;
- (void).cxx_destruct;
- (id)init;
- (void)scrollViewDidScroll:(id)a0;
- (void)setupUI;

@end
