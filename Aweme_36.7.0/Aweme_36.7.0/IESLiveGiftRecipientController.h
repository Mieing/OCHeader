@class IESLiveGiftRecipientViewModel, NSString, IESLiveGiftAudienceReceiveViewModel, IESLiveGiftGuestInfoView;
@protocol IESHYControllerProtocol;

@interface IESLiveGiftRecipientController : IESLiveCubeController <IESLiveGiftRecipientViewUpdateProtocol, IESLiveGiftRecipientEntranceSubInterface>

@property (retain, nonatomic) IESLiveGiftGuestInfoView *recipientView;
@property (retain, nonatomic) IESLiveGiftRecipientViewModel *recipientViewModel;
@property (retain, nonatomic) IESLiveGiftAudienceReceiveViewModel *audienceViewModel;
@property (weak, nonatomic) id<IESHYControllerProtocol> hybridRecipientListView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)giftViewWillShow;
- (void)giftViewWillDismiss;
- (void)controllerActived;
- (BOOL)shouldShowRecipientView;
- (void)bindUpdateRecipientListViewBlock;
- (void)bindShowRecipientListViewBlock;
- (void)updateRecipientListViewWithCompletion:(id /* block */)a0;
- (id)createGiftRecipientViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 useUIV2:(BOOL)a1;
- (id)audienceServiceImpl;
- (id)recipientServiceImpl;
- (void).cxx_destruct;

@end
