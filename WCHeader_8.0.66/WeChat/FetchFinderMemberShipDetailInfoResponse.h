@class NSString, FetchFinderMemberShipDetailInfoResponse_VisitorMemberInfo, BaseResponse, FetchFinderMemberShipDetailInfoResponse_AuthorMemberInfo, FinderObject, NSMutableArray, FinderContact, FetchFinderMemberShipDetailInfoResponse_VisitorNonMemberInfo, FetchFinderMemberShipDetailInfoResponse_MemberCollectionInfo;

@interface FetchFinderMemberShipDetailInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int membershipStatus;
@property (retain, nonatomic) NSString *membershipZoneTitle;
@property (retain, nonatomic) NSString *membershipZoneDesc;
@property (nonatomic) unsigned int visitorMemberStatus;
@property (retain, nonatomic) FetchFinderMemberShipDetailInfoResponse_VisitorMemberInfo *visitorMemberInfo;
@property (retain, nonatomic) FetchFinderMemberShipDetailInfoResponse_VisitorNonMemberInfo *visitorNonMemberInfo;
@property (retain, nonatomic) FetchFinderMemberShipDetailInfoResponse_AuthorMemberInfo *authorMemberInfo;
@property (nonatomic) unsigned int membershipServicePrice;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) FinderContact *contact;
@property (retain, nonatomic) FinderObject *currentLive;
@property (retain, nonatomic) NSString *memberRightsUrl;
@property (retain, nonatomic) NSString *wecoinProductId;
@property (retain, nonatomic) FetchFinderMemberShipDetailInfoResponse_MemberCollectionInfo *memberCollection;
@property (nonatomic) unsigned int autoMembershipServicePrice;
@property (nonatomic) unsigned long long extMask;
@property (nonatomic) unsigned int autoRenewSwitch;
@property (retain, nonatomic) NSMutableArray *statisticalInfoList;
@property (nonatomic) unsigned int homeLineSwitch;
@property (nonatomic) unsigned int previewMode;
@property (nonatomic) unsigned long long msId;
@property (nonatomic) unsigned int visitorMemberBlockFlag;

+ (void)initialize;

@end
