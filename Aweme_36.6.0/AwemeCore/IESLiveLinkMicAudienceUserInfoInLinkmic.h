@class NSString, NSMutableArray;

@interface IESLiveLinkMicAudienceUserInfoInLinkmic : IESLivePBBaseMessage

@property (nonatomic) long long addFollowersCount;
@property (copy, nonatomic) NSString *addFanTicketStr;
@property (nonatomic) long long scoreMoreThan;
@property (nonatomic) long long contributorCount;
@property (retain, nonatomic) NSMutableArray *contributorsArray;
@property (readonly, nonatomic) unsigned long long contributorsArray_Count;
@property (nonatomic) long long linkDuration;
@property (copy, nonatomic) NSString *textInfo;
@property (nonatomic) long long firstSendGiftContributorCount;

+ (id)descriptor;

@end
