@class UIImageView, UILabel, UIView, IESECBubbleViewConfig;

@interface IESECBubbleView : UIView

@property (retain, nonatomic) UIImageView *arrow;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (nonatomic) double arrowX;
@property (retain, nonatomic) IESECBubbleViewConfig *config;
@property (nonatomic) double startTime;

- (void)computeFrame;
- (void)hide:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)show;
- (void)setupUI;
- (void)updateContent:(id)a0;

@end
