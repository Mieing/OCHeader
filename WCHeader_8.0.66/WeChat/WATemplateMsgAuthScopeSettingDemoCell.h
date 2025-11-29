@class UIButton, NSString;

@interface WATemplateMsgAuthScopeSettingDemoCell : UITableViewCell <ZZFlexibleLayoutViewProtocol>

@property (retain, nonatomic) UIButton *button;
@property (copy, nonatomic) id /* block */ viewEventAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeightByDataModel:(id)a0;

- (void)setViewDataModel:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;

@end
