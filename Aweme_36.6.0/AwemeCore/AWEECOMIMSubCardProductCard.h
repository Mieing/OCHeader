@class UIControl, NSString, UIImageView, AWEECOMIMEntryChatInfoModel, UILabel, UIView;
@protocol AWEECOMIMSubCardProductCardDelegate, AWEECOMIMSubCardTrackProtocol;

@interface AWEECOMIMSubCardProductCard : UIView

@property (class, readonly, nonatomic) double contentLength;

@property (copy, nonatomic) NSString *productUrl;
@property (copy, nonatomic) NSString *productId;
@property (retain, nonatomic) AWEECOMIMEntryChatInfoModel *entryModel;
@property (retain, nonatomic) id<AWEECOMIMSubCardTrackProtocol> tracker;
@property (retain, nonatomic) UIControl *containerView;
@property (retain, nonatomic) UIImageView *productImg;
@property (retain, nonatomic) UILabel *productLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *salesLabel;
@property (retain, nonatomic) UIView *statusView;
@property (retain, nonatomic) UILabel *statusLabel;
@property (weak, nonatomic) id<AWEECOMIMSubCardProductCardDelegate> delegate;

+ (double)designHeight;
+ (id)statusDescForGoodsStatus:(unsigned long long)a0;

- (void)tapCard;
- (void).cxx_destruct;
- (void)updateWithData:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
