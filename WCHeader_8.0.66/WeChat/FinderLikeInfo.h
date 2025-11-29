@class FinderContactMsgInfo, NSString, FinderFriendRecExtInfo, FinderPoiInteractionInfo, FinderIdentityInfo, NSMutableArray;

@interface FinderLikeInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *headImgUrl;
@property (nonatomic) unsigned long long likeId;
@property (nonatomic) unsigned int likeFlag;
@property (nonatomic) unsigned int refuseFlag;
@property (retain, nonatomic) NSString *wxUsername;
@property (nonatomic) unsigned long long likeTime;
@property (nonatomic) unsigned int unreadFlag;
@property (retain, nonatomic) FinderContactMsgInfo *msgInfo;
@property (nonatomic) unsigned int followFlag;
@property (nonatomic) unsigned int identityFlag;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int memberFlag;
@property (nonatomic) unsigned int orderCount;
@property (nonatomic) unsigned int interactionCount;
@property (nonatomic) unsigned int thankFlag;
@property (nonatomic) unsigned int thankIconType;
@property (retain, nonatomic) FinderPoiInteractionInfo *poiInteractionInfo;
@property (retain, nonatomic) NSMutableArray *interactionLabelList;
@property (retain, nonatomic) FinderIdentityInfo *finderIdentity;
@property (retain, nonatomic) FinderFriendRecExtInfo *friendRecExtinfo;

+ (void)initialize;

@end
