@interface AWELongPressPanelFamiliarRecommendViewModel : AWELongPressPanelBaseViewModel

@property (nonatomic) unsigned long long familiarRecommendActionType;

+ (id)longPressPanelViewModel;

- (void)configVM;
- (id)panelBizVMIdentifier;
- (id)recommendAwemeParam;
- (void)configIcon;
- (void)recommendAweme;
- (void)cancelRecommendAweme;
- (void)trackRecommendVideoWithActionType:(unsigned long long)a0 isForCancelEvent:(BOOL)a1;
- (void)trackUnloginShow;
- (void)trackUnloginClick;
- (void)trackFinishLoginClickIfNeeded:(BOOL)a0;
- (BOOL)needShow;

@end
