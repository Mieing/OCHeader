@class NSArray;

@interface IESLiveLinkmicDistributionSettingPanel : UIView

@property (nonatomic) long long initialOption;
@property (copy, nonatomic) id /* block */ showAction;
@property (copy, nonatomic) id /* block */ dismissAction;
@property (copy, nonatomic) id /* block */ remoteSetup;
@property (copy, nonatomic) id /* block */ selectionAction;
@property (copy, nonatomic) id /* block */ showRulePageAction;
@property (copy, nonatomic) id /* block */ closeRulePageAction;
@property (copy, nonatomic) NSArray *selectionFlagImageViews;
@property (nonatomic) long long selectionOption;

+ (id)mappedTrackStringFromLinkmicSettingStatus:(int)a0;
+ (id)mappedTrackStringFromDistributionScope:(long long)a0;

- (void)p_setupViews;
- (void)p_cancel;
- (id)initWithInitialOption:(long long)a0 showAction:(id /* block */)a1 dismissAction:(id /* block */)a2 remoteOptionSetupCallback:(id /* block */)a3 selectionAction:(id /* block */)a4 showRulePageAction:(id /* block */)a5 closeRulePageAction:(id /* block */)a6;
- (void)p_showRule;
- (id)p_makeOptionViewWithTitle:(id)a0 description:(id)a1 tag:(long long)a2 choosen:(BOOL)a3 addedToFlagList:(id)a4;
- (void)p_chooseOption:(id)a0;
- (void).cxx_destruct;
- (void)willMoveToSuperview:(id)a0;

@end
