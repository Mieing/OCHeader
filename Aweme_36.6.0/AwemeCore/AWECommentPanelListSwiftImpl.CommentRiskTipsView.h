@class NSString;

@interface AWECommentPanelListSwiftImpl.CommentRiskTipsView : UIView <AWECommentRiskTipsViewProtocol, AWECommentListBottomContainerSubViewDelegate> {
    void /* function */ closeBlock;
    void /* function */ showDetailBlock;
    void /* unknown type, empty encoding */ hasDetail;
    void /* function */ contentStr;
    void /* unknown type, empty encoding */ isBGColorWhite;
    void /* unknown type, empty encoding */ commentRiskColorType;
    void /* unknown type, empty encoding */ commentRiskIconLight;
    void /* unknown type, empty encoding */ commentRiskIconDark;
    void /* unknown type, empty encoding */ commentRiskUrl;
    void /* unknown type, empty encoding */ containerViewBackgroundColor;
    void /* unknown type, empty encoding */ contentLabelTextColor;
    void /* unknown type, empty encoding */ iconTintColor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeButton;
}

@property (nonatomic, copy) id /* block */ closeBlock;
@property (nonatomic, copy) id /* block */ showDetailBlock;
@property (nonatomic, copy) NSString *contentStr;
@property (nonatomic, copy) NSString *accessibilityLabel;

- (double)heightForBottomTipsWithContent:(id)a0 maxWidth:(double)a1;
- (void)closeButtonClick:(id)a0;
- (void)showDetail:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
