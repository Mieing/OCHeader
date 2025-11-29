@class NSString, AWEAwemeModel;

@interface AWEHPTopTabMaskFeedController : AWEBaseController <AWEFeedControllerProtocol>

@property (weak, nonatomic) AWEAwemeModel *curDisplayAweme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldHideCellViewControllerTopGradientView:(id)a0;
- (void)p_updateChannelTopMaskWithAweme:(id)a0;
- (BOOL)p_needReplacePlayerMask;
- (BOOL)p_needHideChannelMaskWithAweme:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;

@end
