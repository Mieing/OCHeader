@class UILabel, NSString, IESLivePaidStreamActionButton;

@interface IESLivePaidStreamLiveVSFormatBlockView : UIView <IESLivePaidStreamBlockView>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) IESLivePaidStreamActionButton *actionButton;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)subTitleLabelFont;
- (void)actionDidFire:(id)a0;
- (void)install:(unsigned long long)a0 uiConfig:(id)a1 actionHandler:(id /* block */)a2;
- (void)uninstall;
- (void).cxx_destruct;
- (id)init;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)titleLabelFont;
- (id)actionButtonFont;

@end
