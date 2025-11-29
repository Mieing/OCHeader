@interface AWECommentSwiftBizUI.CommentRatingsItem : UIImageView {
    void /* unknown type, empty encoding */ emptyImage;
    void /* unknown type, empty encoding */ halfImage;
    void /* unknown type, empty encoding */ fullImage;
    void /* unknown type, empty encoding */ $__lazy_storage_$_halfview;
    void /* unknown type, empty encoding */ position;
    void /* unknown type, empty encoding */ score;
    void /* unknown type, empty encoding */ allowInteraction;
    void /* unknown type, empty encoding */ didFullBlock;
    void /* unknown type, empty encoding */ didRatingBlock;
    void /* unknown type, empty encoding */ didRatingWithSameStatusBlock;
    void /* unknown type, empty encoding */ skipBlock;
    void /* unknown type, empty encoding */ status;
}

- (void)tapGesWithGes:(id)a0;
- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)initWithImage:(id)a0 highlightedImage:(id)a1;

@end
