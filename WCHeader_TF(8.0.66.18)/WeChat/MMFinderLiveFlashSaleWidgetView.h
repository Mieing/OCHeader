@class FinderLiveFlashSaleInfo, MMCountDownLabel, UIImageView, NSURL, UIView, NSString;

@interface MMFinderLiveFlashSaleWidgetView : UIView <MMImageLoaderObserver>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *productImageView;
@property (retain, nonatomic) UIView *shadowView;
@property (retain, nonatomic) MMCountDownLabel *countDownLabel;
@property (retain, nonatomic) UIImageView *tagView;
@property (copy, nonatomic) NSURL *currentImageURL;
@property (copy, nonatomic) id /* block */ onFlashSaleFinish;
@property (copy, nonatomic) id /* block */ onClicked;
@property (retain, nonatomic) FinderLiveFlashSaleInfo *info;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInfo:(id)a0 width:(double)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onTap;
- (void)layoutSubviews;
- (void)updateWithInfo:(id)a0;
- (void)startEntrance;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void).cxx_destruct;

@end
