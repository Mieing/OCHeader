@class NSMutableArray, NSString, NSData, FinderLiveNoticeListInfo, BaseResponse;

@interface FetchFinderMemberShipHomeInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int membershipStatus;
@property (nonatomic) unsigned int visitorMemberStatus;
@property (retain, nonatomic) NSString *membershipZoneTitle;
@property (nonatomic) unsigned int membershipZoneSubtitleType;
@property (retain, nonatomic) NSString *membershipZoneCommonSubtitle;
@property (retain, nonatomic) FinderLiveNoticeListInfo *liveNoticeListInfo;
@property (retain, nonatomic) NSMutableArray *object;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (nonatomic) unsigned int membershipServicePrice;
@property (nonatomic) unsigned int otherVideoNum;
@property (retain, nonatomic) NSString *finderMemberTicket;
@property (retain, nonatomic) NSString *wecoinProductId;
@property (nonatomic) unsigned int autoMembershipServicePrice;
@property (nonatomic) unsigned int autoRenewSwitch;
@property (nonatomic) unsigned int visitorMemberBlockFlag;

+ (void)initialize;

@end
