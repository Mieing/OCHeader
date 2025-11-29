@class UILabel, NSString, UIView;
@protocol IESLivePaidStreamFeedTicketViewProtocol;

@interface IESLivePaidStreamLiveFeedBlockView : UIView <IESLivePaidStreamBlockView>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView<IESLivePaidStreamFeedTicketViewProtocol> *feedTicketView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)install:(unsigned long long)a0 uiConfig:(id)a1 actionHandler:(id /* block */)a2;
- (void)uninstall;
- (void).cxx_destruct;
- (id)init;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
