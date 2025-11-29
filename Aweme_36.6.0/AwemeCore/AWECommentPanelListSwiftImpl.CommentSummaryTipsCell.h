@class NSString;

@interface AWECommentPanelListSwiftImpl.CommentSummaryTipsCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ jumpButtonClickedBlock;
    void /* unknown type, empty encoding */ initialFinished;
    void /* function */ jumpLabelText;
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_iconImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_jumpLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_redPointView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_jumpButton;
}

@property (nonatomic, copy) NSString *jumpLabelText;

- (void)jumpButtonClicked;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
