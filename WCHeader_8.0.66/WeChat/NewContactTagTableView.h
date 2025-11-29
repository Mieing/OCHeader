@class UIColor, UIFont, NSString, NSNumber, ContactsViewTagListCollectionView;
@protocol NewContactTagTableViewDelegate;

@interface NewContactTagTableView : FavTagTableView <ContactsViewTagListCollectionViewDelegate> {
    ContactsViewTagListCollectionView *m_tagListView;
}

@property (weak, nonatomic) id<NewContactTagTableViewDelegate> m_delegate;
@property (nonatomic) BOOL hiddenEditButton;
@property (nonatomic) BOOL hiddenHeaderView;
@property (nonatomic) double tagViewCornerRadius;
@property (retain, nonatomic) UIColor *tagButtonTextColor;
@property (retain, nonatomic) UIFont *tagButtonTextFont;
@property (retain, nonatomic) NSNumber *tagImageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initData;
- (void)layoutSubviews;
- (void)addTags:(id)a0 titled:(id)a1;
- (id)makeHeaderView;
- (void)setButtonHighLight:(BOOL)a0 named:(id)a1;
- (void)highLightButtons:(id)a0;
- (void)highLightButtonsWithTagIdSet:(id)a0;
- (void)resetUpdateWithTags:(id)a0;
- (void)triggerCreateTagButton;
- (void)unHighLightAllButtons;
- (id)getArrSelectedTagId;
- (id)gatTagListView;
- (id)getTagNameList;
- (void)setSingleSelectMode:(BOOL)a0;
- (void)setHiddeCreateTag:(BOOL)a0;
- (void)setCreateTagSpecifyName:(id)a0;
- (void)setHandleCreateTagBolck:(id /* block */)a0;
- (void)setScrollViewEdgeInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)didSelectedOrCancelTagButtonWithTagId:(unsigned int)a0 tagName:(id)a1 isSelected:(BOOL)a2;
- (void)didContactTagCreateTagWithTagId:(unsigned int)a0 result:(BOOL)a1 isRename:(BOOL)a2;
- (void)didTagButtonWillDisplayWithTagId:(unsigned int)a0 tagName:(id)a1;
- (void)onDidClickCreateTagButton;
- (id)getViewController;
- (void)calculateHeight;
- (void).cxx_destruct;

@end
