@class UILabel, HTSEventContext, IESLivePSComponentConfigModel;

@interface IESLivePublicScreenCommonTipView : UIView <IESLivePSComponentViewProtocol>

@property (retain, nonatomic) UILabel *tipLabel;
@property (copy, nonatomic) id /* block */ allAnimationFinished;
@property (retain, nonatomic) IESLivePSComponentConfigModel *configModel;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (void)appear:(id /* block */)a0;
- (void)disappear:(id /* block */)a0;
- (void)setAttributedText:(id)a0 adviseType:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
