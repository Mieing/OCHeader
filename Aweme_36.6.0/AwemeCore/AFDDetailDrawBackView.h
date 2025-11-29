@class NSString, UIImageView, NSTimer, UILabel;
@protocol AFDDetailDrawBackViewDelegate;

@interface AFDDetailDrawBackView : UIView <AFDDetailDrawBackViewProtocol>

@property (retain, nonatomic) UILabel *scrollTipLabel;
@property (retain, nonatomic) UIImageView *moreImageView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long count;
@property (weak, nonatomic) id<AFDDetailDrawBackViewDelegate> delegate;
@property (nonatomic) BOOL disableStartCountDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startCountDown;
- (void)stopCountDown;
- (void)reStarCountDownIfNeed;
- (void)setSomeViewHidden:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;

@end
