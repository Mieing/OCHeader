@interface AWEIMGroupImpl.GroupChatContentPhotoVideoCell : UICollectionViewCell <IESIMMediaCoverDisplayProtocol> {
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ bottomMaskView;
    void /* unknown type, empty encoding */ durationLabel;
    void /* unknown type, empty encoding */ failView;
    void /* unknown type, empty encoding */ viewModel;
}

- (id)mediaImageView;
- (id)mediaMessage;
- (struct CGSize { double x0; double x1; })mediaSize;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
