@class IESECLiveGoodsBaseModel, NSString, UIImageView, UILabel, UIView;
@protocol IESECLiveHidableHeaderComponentDelegate, IESECLiveGoodsIntroducingBannerDelegate;

@interface IESECLiveGoodsIntroducingBanner : UIView <IESECLiveHidableHeaderComponentProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *indexBgImageView;
@property (retain, nonatomic) UILabel *indexHeaderLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *goodsTitleLabel;
@property (retain, nonatomic) UIImageView *arrorImgView;
@property (nonatomic) BOOL shown;
@property (retain, nonatomic) IESECLiveGoodsBaseModel *goodsModel;
@property (weak, nonatomic) id<IESECLiveGoodsIntroducingBannerDelegate> delegate;
@property (readonly) UIView *view;
@property (weak, nonatomic) id<IESECLiveHidableHeaderComponentDelegate> hidableHeaderComponentDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clickBanner;
- (void)setShown:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
