@class UIImageView, UILabel;
@protocol AWEPlayAiToTextRemindViewDelegate;

@interface AWEPlayAiToTextRemindView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLable;
@property (weak, nonatomic) id<AWEPlayAiToTextRemindViewDelegate> delegate;
@property (nonatomic) BOOL isShow;

+ (id)remindView;

- (void)didClick;
- (void)addTapGestureRecognizer;
- (void)showWithArrows;
- (void).cxx_destruct;
- (void)hide;
- (void)setUpUI;

@end
