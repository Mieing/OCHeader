@class CAShapeLayer, AWEMarkView, UILabel, UIView;

@interface AWEFeedAnchorStickerView : UIControl

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) AWEMarkView *stickerButton;
@property (retain, nonatomic) AWEMarkView *subStickerButton;
@property (retain, nonatomic) UILabel *publishReasonLabel;
@property (nonatomic) unsigned long long currentStage;
@property (retain, nonatomic) CAShapeLayer *maskLayer;

+ (Class)aAWEFeedFlameAnchorDOUYINHTSAdapterProtocolClass;

- (void)updateWithAwemeModel:(id)a0;
- (id)aAWEFeedFlameAnchorDOUYINHTSAdapterProtocol;
- (void)showSubStickerBtnAndPublishReasonText;
- (void)updateStickerFlameWithModel:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)setupUI;

@end
