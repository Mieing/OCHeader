@class NSArray, MMUIScrollView, OrderedDictionary;
@protocol IntelligentMsgImgLabelListViewDelegate;

@interface IntelligentMsgImgLabelListView : MMUIView {
    MMUIScrollView *m_scrollView;
    OrderedDictionary *m_dicLabelButtonInfo;
}

@property (retain, nonatomic) NSArray *m_LabelList;
@property (weak, nonatomic) id<IntelligentMsgImgLabelListViewDelegate> delegate;

- (id)init;
- (void)initData;
- (void)initView;
- (void)reloadButtonCacheWithLabels:(id)a0;
- (id)addButton:(id)a0;
- (id)createButton:(id)a0;
- (struct CGPoint { double x0; double x1; })getPositionForView:(id)a0 withWidth:(double)a1 behindButton:(id)a2;
- (void)setButtonBackground:(id)a0;
- (id)genImageWithisHighLight:(BOOL)a0 buttonSize:(struct CGSize { double x0; double x1; })a1;
- (void)updateMsgImgLabelButtonWithLabelName:(id)a0;
- (void)onClickMsgImgLabelButton:(id)a0;
- (void).cxx_destruct;

@end
