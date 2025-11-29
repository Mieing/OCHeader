@class AWEPOIMapContext, UILabel, AWEGradientView, UIView;

@interface AWEPOIMapInfoHeaderTransportItemView : UIView

@property (retain, nonatomic) AWEGradientView *colorfulBorderView;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UILabel *transportTypeLabel;
@property (retain, nonatomic) UILabel *transportTimeLabel;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) AWEPOIMapContext *context;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long loadingState;
@property (nonatomic) long long type;
@property (nonatomic) double duration;

+ (double)itemPadding;
+ (double)itemWidth;
+ (double)itemHeight;

- (void)configWithETA:(id)a0;
- (id)stringWithType:(long long)a0;
- (void)updateAfterStateChanged;
- (void)updateLoadingState;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (void)setupUI;
- (void)didTap;

@end
