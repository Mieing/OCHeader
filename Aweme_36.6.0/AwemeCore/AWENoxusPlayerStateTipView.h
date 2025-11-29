@class YYLabel, AWENoxusGradientView, AWENoxusHighlightButton;
@protocol AWENoxusPlayerStateTipDelegate;

@interface AWENoxusPlayerStateTipView : UIView

@property (retain, nonatomic) AWENoxusGradientView *backView;
@property (retain, nonatomic) YYLabel *tipLabel;
@property (retain, nonatomic) AWENoxusHighlightButton *closeBtn;
@property (weak, nonatomic) id<AWENoxusPlayerStateTipDelegate> delegate;

- (void)setSettingType:(unsigned long long)a0 contentType:(long long)a1 stateType:(unsigned long long)a2;
- (void)layoutWithCloseBtnShow:(BOOL)a0;
- (id)highlightedAttributed:(id)a0 withHighlightContent:(id)a1 tapAction:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
