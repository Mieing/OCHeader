@interface AWECommentPanelListSwiftImpl.CommentFoldView : UIView {
    void /* unknown type, empty encoding */ buttonTapBlock;
    void /* unknown type, empty encoding */ isLandscape;
    void /* unknown type, empty encoding */ isBGColorWhite;
    void /* unknown type, empty encoding */ $__lazy_storage_$_expandButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_expandLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lineView;
}

@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL isHidingLine;
@property (nonatomic) BOOL isExpanded;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)expandButtonTapped;

@end
