@interface AWEKnowledgeRichContentImpl.FullPageFeedAuthorCell : AWEKnowledgeSwiftBasic.FullPageBaseItemViewCell {
    void /* unknown type, empty encoding */ didSelectAvatarBlock;
    void /* unknown type, empty encoding */ didSelectUsernameBlock;
    void /* unknown type, empty encoding */ didSelectRelationBlock;
    void /* unknown type, empty encoding */ $__lazy_storage_$_avatarView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_userNameLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_relationTitleButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_poiAnchorContainerView;
    void /* unknown type, empty encoding */ nameLabelGap;
    void /* unknown type, empty encoding */ relationButtonSize;
    void /* unknown type, empty encoding */ relationButtonGap;
}

- (void)didSelectAvatar;
- (void)didSelectUsername;
- (void)didSelectRelation;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
