@class NSString, UIImageView, UILabel, UIButton;
@protocol WCFinderInvalidMusicTopicViewDelegate;

@interface WCFinderInvalidMusicTopicView : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (nonatomic) int errorCode;
@property (copy, nonatomic) NSString *errMsg;
@property (weak, nonatomic) id<WCFinderInvalidMusicTopicViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 errorCode:(int)a1 errMsg:(id)a2;
- (void)layoutUI;
- (void)onConfirmButtonClick;
- (void).cxx_destruct;

@end
