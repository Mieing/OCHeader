@class IESLiveGradientView, FeedItem, UIImageView, UILabel, UIView, UIButton;

@interface AWELiveAppointmentSkyLightCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *liveBackgroundImageView;
@property (retain, nonatomic) UILabel *livingLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIView *timeLabelBGView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *appointmentBtn;
@property (retain, nonatomic) IESLiveGradientView *gradientTitleLabelBGView;
@property (readonly, nonatomic) FeedItem *model;
@property (copy, nonatomic) id /* block */ appointmentCallBack;
@property (copy, nonatomic) id /* block */ openRoomCallBack;
@property (copy, nonatomic) id /* block */ openPaidPanelCallBack;

- (void)tapGestureAction;
- (void)openRoom;
- (void)trackerWithKey:(id)a0 extraParams:(id)a1;
- (void)trackerWithKey:(id)a0;
- (void)setItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)targetAction;

@end
