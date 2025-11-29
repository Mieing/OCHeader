@class UIControl, NSString, UIImageView, UILabel, AWEECOMIMEntryChatInfoModel;
@protocol AWEECOMIMSubCardTrackProtocol;

@interface AWEECOMIMSubCardOrderCard : UIView

@property (retain, nonatomic) UIControl *containerView;
@property (retain, nonatomic) UIImageView *productImg;
@property (retain, nonatomic) UILabel *productLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (copy, nonatomic) NSString *orderId;
@property (copy, nonatomic) NSString *fullOrderUrl;
@property (retain, nonatomic) AWEECOMIMEntryChatInfoModel *entryModel;
@property (retain, nonatomic) id<AWEECOMIMSubCardTrackProtocol> tracker;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *unitBtmId;

+ (double)designHeight;

- (void)tapCard;
- (void).cxx_destruct;
- (void)updateWithData:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
