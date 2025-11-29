@class NSString, IESLivePaidStreamActionButton, UILabel, IESLivePaidStreamUIConfig;

@interface IESLivePaidstreamPlaybackDistributeBlockView : UIView <IESLivePaidStreamBlockView>

@property (retain, nonatomic) IESLivePaidStreamUIConfig *uiConfig;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) IESLivePaidStreamActionButton *actionBtn;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (nonatomic) BOOL enableAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)actionDidFire:(id)a0;
- (void)install:(unsigned long long)a0 uiConfig:(id)a1 actionHandler:(id /* block */)a2;
- (void)uninstall;
- (void).cxx_destruct;
- (id)init;

@end
