@class NSArray, OrderedDictionary;
@protocol IntelligentMsgImgResultListViewDelegate;

@interface IntelligentMsgImgResultListView : MMUIView {
    OrderedDictionary *m_dicLabelButtonInfo;
}

@property (retain, nonatomic) NSArray *m_LabelList;
@property (nonatomic) unsigned int m_style;
@property (weak, nonatomic) id<IntelligentMsgImgResultListViewDelegate> delegate;

- (id)init;
- (void)initData;
- (void)initView;
- (void)reloadButtonCacheWithResults:(id)a0 selectedResultType:(unsigned int)a1;
- (id)addButton:(id)a0;
- (id)createButton:(id)a0;
- (struct CGPoint { double x0; double x1; })getPositionForView:(id)a0 withWidth:(double)a1 behindButton:(id)a2;
- (void)setButtonBackground:(id)a0;
- (id)genImageWithButtonSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateMsgImgLabelButtonWithSearchType:(unsigned int)a0;
- (void)onClickMsgImgLabelButton:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
