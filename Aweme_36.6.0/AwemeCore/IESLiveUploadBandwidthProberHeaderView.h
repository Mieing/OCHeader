@class UILabel, UIImageView;

@interface IESLiveUploadBandwidthProberHeaderView : UIView

@property (retain, nonatomic) UILabel *tipsLable;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) UIImageView *loadingImageView;

- (void)stopRotateAnimation;
- (void)playRotateAnimation;
- (id)initWithTipTitle:(id)a0 isLoading:(BOOL)a1;
- (void)updateWithTipTitle:(id)a0 isLoading:(BOOL)a1;
- (void)setupUIWithTipTitle:(id)a0 isLoading:(BOOL)a1;
- (void)setupIsLoading:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
