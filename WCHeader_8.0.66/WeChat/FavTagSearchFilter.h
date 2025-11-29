@class NSString, NSArray, FavTagListView, UILabel, MMUIButton, NSMutableArray;
@protocol FavTagSearchFilterDelegate;

@interface FavTagSearchFilter : MMUIView <ContactTagNameEditViewControllerDelegate, FavTagEditViewDelegate, UIScrollViewDelegate> {
    UILabel *m_label;
    MMUIButton *m_tagEditButton;
    FavTagListView *m_tagListView;
    NSMutableArray *m_currentTags;
    NSMutableArray *m_allTags;
    NSArray *m_keyword;
    BOOL m_isCenterAlign;
}

@property (weak, nonatomic) id<FavTagSearchFilterDelegate> m_delegate;
@property (nonatomic) double btnCornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 alignCenter:(BOOL)a1;
- (void)dealloc;
- (void)updateWithTagList:(id)a0 highlightKeyWords:(id)a1;
- (void)initLabel;
- (void)updateTag:(id)a0 to:(id)a1;
- (long long)indexOfTag:(id)a0;
- (void)reloadTagView;
- (void)setTag:(id)a0 isSelected:(BOOL)a1;
- (void)setTitle:(id)a0;
- (id)getTagList;
- (id)getAllTagList;
- (void)removeLastTag;
- (void)removeAllTags;
- (void)removeSelectedTag;
- (void)renameTag:(id)a0;
- (void)deleteTag:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void)willHideEditMenu:(id)a0;
- (void)onAddButton:(id)a0;
- (void)onDeleteButton:(id)a0;
- (void)onLongPressTagBtn:(id)a0;
- (void)showMenu;
- (void)onTagNameEditViewControllerRetWithTagName:(id)a0;
- (void).cxx_destruct;

@end
