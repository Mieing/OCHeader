@class UIView, MMWebImageView, WCGiftCardData, NSString, UIImageView, UIButton, WCGiftCardLetterView, WCMultiGiftView, WCFitLayoutView, WCMultiGiftPersonView, UILabel, UIScrollView;
@protocol WCGiftCardDetailViewDelegate;

@interface WCGiftCardDetailView : MMUIView <UIScrollViewDelegate, WCMultiGiftDelegate, CAAnimationDelegate>

@property (retain, nonatomic) WCFitLayoutView *descriptView;
@property (retain, nonatomic) UILabel *desLabel;
@property (retain, nonatomic) UILabel *cardTitleLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) MMWebImageView *cardPic;
@property (retain, nonatomic) UIView *cardBackShadowPic;
@property (retain, nonatomic) UIView *topBarView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *giftHeadView;
@property (retain, nonatomic) UIImageView *leftBackGround;
@property (retain, nonatomic) UIImageView *rightBackGround;
@property (retain, nonatomic) UILabel *toUserLaebl;
@property (retain, nonatomic) WCGiftCardLetterView *letterView;
@property (retain, nonatomic) MMWebImageView *headImageView;
@property (retain, nonatomic) UILabel *fromUserLabel;
@property (retain, nonatomic) UIButton *jumpButton;
@property (retain, nonatomic) UIButton *operationButton;
@property (retain, nonatomic) UIView *divideLine;
@property (retain, nonatomic) UIView *edgeLine;
@property (retain, nonatomic) UIView *operationLine;
@property (retain, nonatomic) UIButton *centerJumpBtn;
@property (retain, nonatomic) UILabel *headerTitleLabel;
@property (retain, nonatomic) WCMultiGiftView *multiGiftView;
@property (retain, nonatomic) WCMultiGiftPersonView *multiGiftPersonView;
@property (retain, nonatomic) UIView *maskbackView;
@property (retain, nonatomic) WCGiftCardData *giftCardData;
@property (nonatomic) double viewWidth;
@property (weak, nonatomic) id<WCGiftCardDetailViewDelegate> delegate;
@property (nonatomic) struct CGSize { double width; double height; } topSize;
@property (nonatomic) BOOL isFirstOpen;
@property (nonatomic) BOOL isOpened;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)createOutOfCardView;
- (void)createReceiveView;
- (void)createSendView;
- (void)createLetterView:(double)a0;
- (void)createMultiGiftPersonView:(double)a0;
- (void)createMaskBackView:(double)a0;
- (void)createFooter:(double)a0;
- (void)backGroundDidClikced:(id)a0;
- (void)doGiftOpening;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)doRefresh;
- (void)centerJumpBtnClick;
- (void).cxx_destruct;

@end
