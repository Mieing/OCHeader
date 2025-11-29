@class IESGCPPBGameDetailNavBarV3;

@interface IESGCPDetailNavBarViewModel : IESGCPDetailBaseViewModel

@property (retain, nonatomic) IESGCPPBGameDetailNavBarV3 *navBarData;
@property (nonatomic) BOOL isSwitchViewAttachment;

- (BOOL)shouldHideTabNaviSwitcher;
- (double)tabNavCornerRadius;
- (id)gameDetailTabs;
- (void).cxx_destruct;
- (id)backgroundColor;
- (void)setContent:(id)a0;

@end
