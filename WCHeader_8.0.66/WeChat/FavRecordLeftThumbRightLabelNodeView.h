@class NSString, MMUIImageView, UILabel;

@interface FavRecordLeftThumbRightLabelNodeView : FavRecordBaseNodeView {
    MMUIImageView *m_thumbView;
    NSString *m_titleText;
    NSString *m_detailText;
    UILabel *m_titleLabel;
    UILabel *m_detailLabel;
}

- (void)addContentSubView;
- (void)initDetailLabel;
- (void)onTouchDown;
- (void)onTouchUpInside;
- (void)onLongTouch;
- (void)onTouchCancel;
- (void)updateBkgImage:(BOOL)a0;
- (void)onClick;
- (void).cxx_destruct;

@end
