@class WCDataItem, FavoritesItem, CMessageWrap, UILabel, UIView;

@interface FavDetailHeaderView : MMUIView {
    UILabel *m_sourceTimeLabel;
    UILabel *m_sourceTitleLabel;
    UIView *m_contentView;
    UIView *m_separateLine;
    FavoritesItem *m_favItem;
    CMessageWrap *m_messageWrap;
    WCDataItem *m_wcDataItem;
}

+ (double)getFavDetailHeaderHeight;

- (id)initWithFavItem:(id)a0;
- (id)initWithFavItem:(id)a0 withMessageWrap:(id)a1 withWCDataItem:(id)a2;
- (void)layoutSubviews;
- (void)initView;
- (id)getFavItem;
- (id)genMomentNoteTimeStringByUInt:(unsigned int)a0;
- (void).cxx_destruct;

@end
