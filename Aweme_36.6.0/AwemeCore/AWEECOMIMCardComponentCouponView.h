@class AWEECOMIMCouponModel, AWEECOMIMEntryChatInfoModel, UIImageView, UILabel, UIView, BDPCDDynamicCardDashedLineView;
@protocol AWEECOMIMCardComponentCouponViewDelegate;

@interface AWEECOMIMCardComponentCouponView : UIControl

@property (retain, nonatomic) UIImageView *bgImgView;
@property (retain, nonatomic) UILabel *disCountLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIImageView *receivedImgView;
@property (retain, nonatomic) BDPCDDynamicCardDashedLineView *dashedLineView;
@property (retain, nonatomic) UILabel *receiveLabel;
@property (retain, nonatomic) UIView *topRoundView;
@property (retain, nonatomic) UIView *bottomRoundView;
@property (retain, nonatomic) AWEECOMIMCouponModel *itemModel;
@property (retain, nonatomic) AWEECOMIMEntryChatInfoModel *entryChatModel;
@property (weak, nonatomic) id<AWEECOMIMCardComponentCouponViewDelegate> delegate;

+ (double)designHeight;

- (id)createImageWithMaskLayerColors:(id)a0;
- (void)_customInitSubviewLayouts;
- (void)didClickReceived;
- (void)updateBgImgWithIsCouponValid:(BOOL)a0;
- (void)updateWithCouponModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_customInit;

@end
