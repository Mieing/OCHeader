@interface FlowKit.MessageAwemeVideoSummaryCell : FlowKitBizUI.MessageCell {
    void /* unknown type, empty encoding */ onTitleTapAction;
    void /* unknown type, empty encoding */ onDescriptionTapAction;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ placeHolderView1;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subTitleLabel;
    void /* unknown type, empty encoding */ descriptionLabel;
    void /* unknown type, empty encoding */ separatorLine;
    void /* unknown type, empty encoding */ upperContainerView;
    void /* unknown type, empty encoding */ lowerContainerView;
    void /* unknown type, empty encoding */ gradientView;
    void /* unknown type, empty encoding */ expandButton;
    void /* unknown type, empty encoding */ gradientLayer;
    void /* unknown type, empty encoding */ borderLayer;
    void /* unknown type, empty encoding */ upperTapGesture;
    void /* unknown type, empty encoding */ lowerTapGesture;
    void /* unknown type, empty encoding */ isLoading;
    void /* unknown type, empty encoding */ summaryContentStatus;
}

- (void)handleExpandTap:(id)a0;
- (void)handleUpperTap:(id)a0;
- (void)handleLowerTap:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
