@interface AWELongPressPanelBgPlayViewModel : AWELongPressPanelBaseViewModel

+ (BOOL)shouldShowListenFeedWithAwemeModel:(id)a0 referString:(id)a1 enterFrom:(id)a2;
+ (id)longPressPanelViewModel;

- (double)getIconSize;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (void)handleSubView;
- (BOOL)enableUseRightView;
- (id)bgPlayCopyrightTextDict;
- (id)getCopyrightSubTitle;
- (BOOL)needShow;

@end
