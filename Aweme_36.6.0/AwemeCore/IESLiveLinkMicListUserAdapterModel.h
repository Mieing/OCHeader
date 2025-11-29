@class HTSLiveUser, IESLiveWaitingListUser, NSString, IESLiveLinkMicAudienceListResponse_ListUser;

@interface IESLiveLinkMicListUserAdapterModel : NSObject

@property (retain, nonatomic) HTSLiveUser *user;
@property (retain, nonatomic) IESLiveWaitingListUser *waitingListUser;
@property (retain, nonatomic) IESLiveLinkMicAudienceListResponse_ListUser *audienceResponseListUser;
@property (nonatomic) long long linkmicId;
@property (nonatomic) long long modifyTime;
@property (copy, nonatomic) NSString *linkmicIdStr;
@property (copy, nonatomic) NSString *applicationReason;
@property (nonatomic) BOOL applicationHasExpired;
@property (copy, nonatomic) NSString *last7DaysGiftCountText;
@property (copy, nonatomic) NSString *inviteListLast7DaysGiftCountText;
@property (copy, nonatomic) NSString *fanTicket;
@property (nonatomic) BOOL isAddPrice;
@property (nonatomic) long long addPriceTimeMs;
@property (nonatomic) long long paidAmount;
@property (nonatomic) int linkStatus;
@property (nonatomic) int listUserType;
@property (nonatomic) long long lastInvitedTimeMs;
@property (nonatomic) BOOL isActive;

- (id)initWithWaitingListUser:(id)a0;
- (id)initWithListResponseUser:(id)a0;
- (void).cxx_destruct;

@end
