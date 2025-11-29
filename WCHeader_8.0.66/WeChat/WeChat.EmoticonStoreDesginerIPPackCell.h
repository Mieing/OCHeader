@interface WeChat.EmoticonStoreDesginerIPPackCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ $__lazy_storage_$_packImgBGView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_packImg;
    void /* unknown type, empty encoding */ $__lazy_storage_$_packTitleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_focusingView;
}

+ (double)cellHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)updateWithImgUrl:(id)a0 andTitle:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
