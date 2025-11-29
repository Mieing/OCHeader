@class NSString, UIImageView, AWEAwemeModel, UILabel, UIView;

@interface AWESearchLiveStatusView : UIView <AWESearchLiveStatusViewProtocol>

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *liveBackgroundView;
@property (retain, nonatomic) UIImageView *liveTypeTagImage;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configModel:(id)a0;
- (void)configLivingUI;
- (void)configReplayUI;
- (void)liveTagWidthChanged:(double)a0 userCountWidth:(double)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
