@class NSString, IESGCPPBGameDetailOfficialAccount;

@interface IESGCPDetailReserveOfficalUserViewModel : IESGCPDetailBaseViewModel

@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *fansNum;
@property (nonatomic) BOOL isFollow;
@property (copy, nonatomic) NSString *officialUserId;
@property (copy, nonatomic) NSString *officialSecUserId;
@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *gameName;
@property (nonatomic) BOOL isAnchorScene;
@property (nonatomic) BOOL hasShown;
@property (readonly, nonatomic) IESGCPPBGameDetailOfficialAccount *officialAccount;

- (void)trackShowEvent;
- (void)followAction;
- (id)commonReportParams;
- (void)trackFollowAction:(BOOL)a0;
- (void).cxx_destruct;
- (void)setContent:(id)a0;

@end
