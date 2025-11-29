@interface AWEIMGroupImpl.GroupChatContentFeedCell : UICollectionViewCell <IESIMMediaCoverDisplayProtocol> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ avatarImageView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ infoContainerView;
    void /* unknown type, empty encoding */ failView;
}

- (id)mediaImageView;
- (id)mediaMessage;
- (struct CGSize { double x0; double x1; })mediaSize;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
