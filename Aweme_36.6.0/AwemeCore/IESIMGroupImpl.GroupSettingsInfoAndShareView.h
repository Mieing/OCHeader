@interface IESIMGroupImpl.GroupSettingsInfoAndShareView : UIStackView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ infoContainerStackView;
    void /* unknown type, empty encoding */ avatarImageView;
    void /* unknown type, empty encoding */ titleStackView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleStackView;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ copyIcon;
    void /* unknown type, empty encoding */ subtitleStackSpacingView;
    void /* unknown type, empty encoding */ qrContainerView;
    void /* unknown type, empty encoding */ qrImageView;
    void /* unknown type, empty encoding */ shareContainerView;
    void /* unknown type, empty encoding */ dividingLineView;
    void /* unknown type, empty encoding */ shareButton;
    void /* unknown type, empty encoding */ lastEnableShare;
    void /* unknown type, empty encoding */ lastEnableSearch;
    void /* unknown type, empty encoding */ lastAvatarUrlString;
    void /* unknown type, empty encoding */ lastIsAvatarAvatarChanged;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
