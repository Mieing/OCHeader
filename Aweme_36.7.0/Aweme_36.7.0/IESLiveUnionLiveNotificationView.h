@class UIButton, IESLiveGCDTimer, IESLiveUnionLiveNotificationNode, YYLabel;

@interface IESLiveUnionLiveNotificationView : UIView

@property (retain, nonatomic) IESLiveUnionLiveNotificationNode *node;
@property (retain, nonatomic) IESLiveGCDTimer *dismissTimer;
@property (retain, nonatomic) YYLabel *notificationLabel;
@property (retain, nonatomic) UIButton *closeButton;

- (void)closeBtnClicked;
- (void)disappear:(id /* block */)a0;
- (void)startTimerWithDuration:(double)a0;
- (id)initWithNotificationNode:(id)a0;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;
- (void)appear;
- (void)setupSubviews;

@end
