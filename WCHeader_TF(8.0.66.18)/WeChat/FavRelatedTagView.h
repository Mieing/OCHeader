@class MMUILabel, NSMutableArray;
@protocol FavRelatedTagDelegate;

@interface FavRelatedTagView : MMUIView {
    MMUILabel *m_title;
    NSMutableArray *m_tagList;
    NSMutableArray *m_tagBtnsArray;
    NSMutableArray *m_tagBtnTitles;
}

@property (weak, nonatomic) id<FavRelatedTagDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initTitleLabel;
- (void)setTitle:(id)a0;
- (void)setTagList:(id)a0 highlightKeyWords:(id)a1;
- (void)sethighLightKeyWords:(id)a0;
- (void)onClickBtn:(id)a0;
- (id)getAllTagList;
- (long long)indexOfTag:(id)a0;
- (void).cxx_destruct;

@end
