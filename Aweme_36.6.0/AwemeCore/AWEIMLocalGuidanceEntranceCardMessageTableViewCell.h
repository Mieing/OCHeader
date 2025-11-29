@class AWEUserModel;

@interface AWEIMLocalGuidanceEntranceCardMessageTableViewCell : AWEIMLocalFansGroupCardMessageTableViewCell

@property (nonatomic) BOOL isBlockedByTheOtherPerson;
@property (retain, nonatomic) AWEUserModel *fullDetailUser;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)identifier;

- (void)configWithMessage:(id)a0;
- (id)defaultSubTitleStr;
- (void)localFansGroupCardMessageCellTapped;
- (void)updateInviteFansCardUIWithTitleLabel:(id)a0 subTitleLabel:(id)a1;
- (void)__fetchBlockedStatusAndDataAndUpdateLabels;
- (void)__trackInviteFansCardShow;
- (void)__trackShowEvent;
- (void)__fetchFullDetailUserWithCompletion:(id /* block */)a0;
- (void)__fetchDataIfNecessaryWithCompletion:(id /* block */)a0;
- (id)__zeroGroupStr;
- (void)__trackInviteFansCradClick;
- (void)__transferToFansGroupPage;
- (id)__baseTrackParams;
- (void).cxx_destruct;

@end
