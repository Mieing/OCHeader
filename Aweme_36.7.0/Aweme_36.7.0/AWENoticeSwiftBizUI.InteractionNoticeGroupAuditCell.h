@interface AWENoticeSwiftBizUI.InteractionNoticeGroupAuditCell : UICollectionViewCell <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ reuseId;
    void /* unknown type, empty encoding */ isUnreadStyle;
    void /* unknown type, empty encoding */ prepareForReuseBlock;
    void /* unknown type, empty encoding */ cellLayoutChangeBlock;
    void /* unknown type, empty encoding */ cellLayout;
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_leftContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_rightContainerView;
    void /* unknown type, empty encoding */ tapCheckBoxBlock;
    void /* unknown type, empty encoding */ $__lazy_storage_$_checkBoxView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_avatarContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tagsView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentTextView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_actionTextView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_resultTextView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_actionButtonView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_separatorLine;
    void /* unknown type, empty encoding */ gestureShouldRequireFailureBlock;
}

@property (nonatomic) BOOL highlighted;

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)awe_themeReload;
- (void)checkBoxTapped;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (BOOL)isHighlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
