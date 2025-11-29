@interface AWECommentInputViewSwiftImpl.CommentCommunityConventionViewController : UIViewController <AWECommentCommunityConventionViewControllerProtocol, TTTAttributedLabelDelegate, DUXSheetDelegate> {
    void /* unknown type, empty encoding */ popVCClickBlock;
    void /* function */ trackClickBlock;
    void /* unknown type, empty encoding */ mainTitle;
    void /* unknown type, empty encoding */ detail;
    void /* unknown type, empty encoding */ linkIndex;
    void /* unknown type, empty encoding */ linkLength;
    void /* unknown type, empty encoding */ linkURL;
    void /* unknown type, empty encoding */ btnText;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_detailLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_linkLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_primaryButton;
}

@property (nonatomic, copy) id /* block */ trackClickBlock;

- (void)attributedLabel:(id)a0 didSelectLinkWithURL:(id)a1;
- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidClickCloseButton:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)show;
- (void)primaryButtonClicked;

@end
