@class MMUILabel;

@interface FavRecordRecordNodeView : FavRecordBaseNodeView {
    MMUILabel *m_titleLabel;
    MMUILabel *m_detailLabel;
}

+ (double)heightForNodeWithDesc:(id)a0;

- (void)layoutSubviews;
- (void)addContentSubView;
- (void)onTouchDown;
- (void)onTouchUpInside;
- (void)onTouchCancel;
- (void)LongPressEvents;
- (void)updateBkgImage:(BOOL)a0;
- (void).cxx_destruct;

@end
