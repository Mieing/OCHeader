@class UIImageView, UILabel;
@protocol XPLayQualityStats, NSCopying;

@interface BDPXPlayNetworkSignalView : UIView

@property (retain, nonatomic) id<XPLayQualityStats, NSCopying> qualityStats;
@property (nonatomic) long long networkStatus;
@property (retain, nonatomic) UIImageView *signalImageView;
@property (retain, nonatomic) UILabel *delayMSLabel;

- (id)createSignalImageView;
- (id)getDelayMSText;
- (BOOL)isGoodNetworkType;
- (id)initWithPlayQualityStats:(id)a0 networkStatus:(long long)a1;
- (void)refreshPlayQualityStats:(id)a0 networkStatus:(long long)a1;
- (void)xplayLoadFailed;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateUI;
- (id)getColor;

@end
