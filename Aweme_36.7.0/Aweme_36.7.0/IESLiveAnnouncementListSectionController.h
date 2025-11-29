@class IESLiveAnnouncementModel, IESLiveAnnouncementContext, NSString;

@interface IESLiveAnnouncementListSectionController : IGListSectionController <IESLiveAnnouncementCardViewDelegate, IESLiveAnnouncementListCellDelegate>

@property (retain, nonatomic) IESLiveAnnouncementModel *model;
@property (weak, nonatomic) IESLiveAnnouncementContext *context;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ sendMsgBlock;
@property (copy, nonatomic) id /* block */ trackListClickBlock;
@property (copy, nonatomic) id /* block */ reloadListDataBlock;
@property (copy, nonatomic) id /* block */ updateLinkButtonBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (void)reloadListDataWithCompletion:(id /* block */)a0;
- (void)cardViewDidTappedContent:(id)a0;
- (void)cardViewDidTappedMoreFunc:(id)a0;
- (void)cardViewDidTappedShare:(id)a0;
- (void)cardViewDidTappedShareToFriend:(id)a0;
- (void)cardViewDidTappedShareToGroup:(id)a0;
- (void)cardViewDidTappedBroker:(id)a0;
- (BOOL)shouldShowShareGroupEntry:(id)a0;
- (void)listCellDidTappedSelect:(id)a0;
- (void)announcementDidSelected;
- (void)trackListClickWithButtonType:(id)a0;
- (void)openEditPanel;
- (void)openMoreFuncPanel;
- (void)publishOrUnPublishAnnouncement:(BOOL)a0;
- (id)imSendMessageActionSheetItem;
- (id)pinOrUnPinActionSheetItem;
- (id)editActionSheetItem;
- (void)updateLinkButtonWithEnabled:(BOOL)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)init;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
