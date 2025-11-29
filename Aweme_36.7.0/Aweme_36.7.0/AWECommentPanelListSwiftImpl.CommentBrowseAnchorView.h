@class NSString, NSIndexPath;

@interface AWECommentPanelListSwiftImpl.CommentBrowseAnchorView : UIView <AWECommentBrowseAnchorProtocol> {
    void /* function */ targetCid;
    void /* function */ lastBrowseIndexPath;
    void /* function */ didDismiss;
    void /* function */ didTap;
    void /* unknown type, empty encoding */ threshold;
    void /* unknown type, empty encoding */ countDownNum;
    void /* unknown type, empty encoding */ params;
    void /* unknown type, empty encoding */ $__lazy_storage_$_iconImage;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
}

@property (nonatomic, copy) NSString *targetCid;
@property (nonatomic, copy) NSIndexPath *lastBrowseIndexPath;
@property (nonatomic, copy) id /* block */ didDismiss;
@property (nonatomic, copy) id /* block */ didTap;
@property (nonatomic) BOOL isBGWhite;
@property (nonatomic) struct CGPoint { double x0; double x1; } currentContentOffSize;
@property (nonatomic) BOOL scrollToTop;

- (void)onUIThemeChange;
- (void)updateBottom:(double)a0;
- (void)showOnView:(id)a0 params:(id)a1 offset:(double)a2;
- (void)countDown:(id)a0;
- (void)tapClick;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
