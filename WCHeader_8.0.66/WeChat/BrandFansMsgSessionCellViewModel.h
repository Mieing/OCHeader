@class BrandFansContact, BrandFansMsgSessionInfo;

@interface BrandFansMsgSessionCellViewModel : NSObject <BrandFansContactMgrExt>

@property (retain, nonatomic) BrandFansMsgSessionInfo *sessionInfo;
@property (retain, nonatomic) BrandFansContact *fansContact;
@property (nonatomic) BOOL notifyEnable;
@property (copy, nonatomic) id /* block */ onSessionUpdated;

- (id)initWithSessionInfo:(id)a0 contact:(id)a1 notifyEnable:(BOOL)a2;
- (void)dealloc;
- (id)cellData;
- (BOOL)useRoundAvatar;
- (void)brandFansContactUpdatedForOpenID:(id)a0 contact:(id)a1;
- (void).cxx_destruct;

@end
