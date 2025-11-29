@class UIImageView, YYLabel, NSDictionary;

@interface AWEGeneralSearchAITopHintView : UIView

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) YYLabel *textLabel;
@property (retain, nonatomic) UIImageView *downArrow;
@property (nonatomic) long long status;
@property (copy, nonatomic) id /* block */ tapExpandAiContentBlock;
@property (retain, nonatomic) NSDictionary *logExtra;

- (void)clickTextLabel;
- (void)trackShowWithStatus:(id)a0;
- (void)trackClickWithStatus:(id)a0;
- (void)showInitialHint;
- (void)aiRenderFinish;
- (void)aiRenderFail;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
