@class UIImageView, UILabel, UIView, UIButton;

@interface AWELiveSwiftImpl.AWEFeedLiveTabOperationFoldView : UIView {
    void /* function */ didOperationFoldClick;
    void /* unknown type, empty encoding */ operationFoldData;
    void /* unknown type, empty encoding */ gradientLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_operationTitleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_devideLine;
    void /* unknown type, empty encoding */ $__lazy_storage_$_userAvatar;
    void /* unknown type, empty encoding */ $__lazy_storage_$_roomIntroduction;
    void /* unknown type, empty encoding */ $__lazy_storage_$_jumpLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_jumpImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_jumpButton;
}

@property (nonatomic, copy) id /* block */ didOperationFoldClick;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) UILabel *operationTitleLabel;
@property (nonatomic, retain) UIView *devideLine;
@property (nonatomic, retain) UIImageView *userAvatar;
@property (nonatomic, retain) UILabel *roomIntroduction;
@property (nonatomic, retain) UILabel *jumpLabel;
@property (nonatomic, retain) UIImageView *jumpImageView;
@property (nonatomic, retain) UIButton *jumpButton;

- (void)updateWithOperationFoldContent:(id)a0;
- (void)jumpToOperation:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
