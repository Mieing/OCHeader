@class NSString, AWEIMComponentManager, AWEIMYYLabelPresenter;

@interface AWEIMMessageNoticeComponent : AWEIMFlexComponent <AWEIMComponentManagerDependency, AWEIMComponentContainer, AWEIMMessageNoticeInterface>

@property (retain, nonatomic) AWEIMYYLabelPresenter *label;
@property (nonatomic) BOOL alreadyReport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)refreshNoticeMessage;
- (void)p_setupDisplayString;
- (void)p_adaptNoticeLabelBackground;
- (id)contentPlugin;
- (void).cxx_destruct;

@end
