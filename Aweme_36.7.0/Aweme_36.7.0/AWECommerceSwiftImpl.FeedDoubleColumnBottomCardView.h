@class UIImageView, UILabel;

@interface AWECommerceSwiftImpl.FeedDoubleColumnBottomCardView : UIView <AWEAdFeedDoubleColumnBottomCardView> {
    void /* function */ didTappedBlock;
    void /* function */ onTapBlock;
    void /* unknown type, empty encoding */ $__lazy_storage_$_productImage;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_rightArrowImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dividerLine;
    void /* unknown type, empty encoding */ singleTappedGesture;
    void /* unknown type, empty encoding */ bottomCardItemInfo;
    void /* unknown type, empty encoding */ awemeModel;
}

@property (nonatomic, copy) id /* block */ didTappedBlock;
@property (nonatomic, copy) id /* block */ onTapBlock;
@property (nonatomic, retain) UIImageView *productImage;
@property (nonatomic, retain) UILabel *titleLabel;

- (void)configWithModel:(id)a0;
- (void)didTappedCardView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)reset;

@end
