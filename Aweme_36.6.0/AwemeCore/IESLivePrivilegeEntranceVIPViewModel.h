@class NSString, HTSLiveImage, HTSLiveMemberEntranceInfo;

@interface IESLivePrivilegeEntranceVIPViewModel : NSObject <IESLivePrivilegeEntranceAction>

@property (retain, nonatomic) HTSLiveMemberEntranceInfo *memberEntranceInfo;
@property (retain, nonatomic) HTSLiveImage *vipIcon;
@property (retain, nonatomic) NSString *scheme;
@property (nonatomic) long long entranceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)buildCommonParams;
- (id)initWithEntranceType:(long long)a0;
- (void)didReceiveEntranceUpdateMessage:(id)a0;
- (void)trackMemberEntranceClick;
- (void)trackMemberEntranceShow;
- (void)trackMemberEntranceUpdate;
- (void).cxx_destruct;

@end
