@class NSString;

@interface AWENoticeSwiftBizUI.InteractionNoticeContainerCell : UICollectionViewCell <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ reuseId;
    void /* unknown type, empty encoding */ bgLightColor;
    void /* unknown type, empty encoding */ bgDarkColor;
    void /* unknown type, empty encoding */ checkIfHasOtherEditingCellBlock;
    void /* unknown type, empty encoding */ prepareForReuseBlock;
    void /* unknown type, empty encoding */ gestureShouldRequireFailureBlock;
    void /* unknown type, empty encoding */ performMagicTapBlock;
    void /* unknown type, empty encoding */ getAccessibilityLabelBlock;
    void /* unknown type, empty encoding */ $__lazy_storage_$_avatarContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_actionContainView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_arrowView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_videoCoverContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lightInteractionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomInteractionContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subContentContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomActionBarContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_stickerContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_separatorLine;
    void /* unknown type, empty encoding */ isUnreadStyle;
    void /* unknown type, empty encoding */ startEditing;
    void /* unknown type, empty encoding */ editCustomActions;
    void /* unknown type, empty encoding */ editStateDidChangeBlock;
    void /* unknown type, empty encoding */ endOtherCellEditingStateBlock;
    void /* unknown type, empty encoding */ cellWidthChangeBlock;
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_editContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_editHandler;
    void /* unknown type, empty encoding */ $__lazy_storage_$_endEditingStateGestureRecognizer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_endOtherEditingStateGestureRecognizer;
}

@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic, copy) NSString *accessibilityHint;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic) BOOL highlighted;

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)innerEndEditingStateIfNeededWithGestureRecognizer:(id)a0;
- (void)innerEndOtherEditingStateWithGestureRecognizer:(id)a0;
- (void)awe_themeReload;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (BOOL)isHighlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (BOOL)accessibilityPerformMagicTap;

@end
