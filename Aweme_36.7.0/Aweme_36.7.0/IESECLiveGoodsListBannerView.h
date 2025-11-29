@class NSString, UIImageView, UIView, IESECLiveGoodsListBannerInfoModel;
@protocol IESECLiveGoodsListBannerViewDelegate;

@interface IESECLiveGoodsListBannerView : UIView <IESECLiveConfigViewDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIView *leftView;
@property (retain, nonatomic) UIView *rightView;
@property (retain, nonatomic) UIView *backupView;
@property (retain, nonatomic) IESECLiveGoodsListBannerInfoModel *bannerModel;
@property (weak, nonatomic) id<IESECLiveGoodsListBannerViewDelegate> delegate;
@property (nonatomic) double leftInset;
@property (nonatomic) double rightInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)p_textFont;
- (void)configViewShouldClose:(id)a0;
- (void)combinationBlockClickAction:(id)a0;
- (void)combinationBlockShowWith:(id)a0;
- (id)getCartAddDestinationView;
- (void)p_clickBanner;
- (void)p_genearateBackupRightIcon;
- (void)p_delegateDidClickWithArea:(unsigned long long)a0 combinationBlockModel:(id)a1;
- (void)p_doAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
