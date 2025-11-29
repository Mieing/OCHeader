@interface FlowKit.VoiceListCell : UITableViewCell {
    void /* unknown type, empty encoding */ didMoreButtonClicked;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ ttsModel;
    void /* unknown type, empty encoding */ position;
    void /* unknown type, empty encoding */ isMixedVoiceAdded;
    void /* unknown type, empty encoding */ isMixedVoiceAddEnabled;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ ttsStatus;
    void /* unknown type, empty encoding */ $__lazy_storage_$_avatarImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleStack;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topRightView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleTtsContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleTtsAnimationView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_rightTtsContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_rightTtsAnimationView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingViewContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_generatingLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_hotIconLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subscribeNumLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_splitDotLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_extraDescriptionLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_rightMoreButtonContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_rightMoreButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_mixedVoiceButtonContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_mixedVoiceImage;
    void /* unknown type, empty encoding */ $__lazy_storage_$_rightActionsStackView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_rightActionPlaceHolderView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomDescStack;
    void /* unknown type, empty encoding */ $__lazy_storage_$_errorContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_errorIconImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_errorLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_selecctedView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_selectedIconViewContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_selectedIconView;
    void /* unknown type, empty encoding */ ttsSelectedTagView;
    void /* unknown type, empty encoding */ selectStyleType;
    void /* unknown type, empty encoding */ separatorView;
    void /* unknown type, empty encoding */ avatarRequest;
}

- (void)moreButtonAction;
- (void)mixedVoiceButtonAction;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (id)initWithCoder:(id)a0;

@end
