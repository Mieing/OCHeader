@class UIScrollView, NSMutableArray;
@protocol FavTagEditViewDelegate;

@interface FavTagTableView : MMUIView {
    NSMutableArray *m_arrTagListView;
    NSMutableArray *m_arrHeaders;
}

@property (retain, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) id<FavTagEditViewDelegate> m_delegate;
@property (nonatomic) BOOL embeddedInScrollView;
@property (nonatomic) double contentHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initData;
- (void)layoutSubviews;
- (void)addTags:(id)a0 titled:(id)a1;
- (void)setButtonHighLight:(BOOL)a0 named:(id)a1;
- (void)highLightButtons:(id)a0;
- (void)unHighLightAllButtons;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;

@end
