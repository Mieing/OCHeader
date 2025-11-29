@class FinderLiveFanClubMember, NSData, NSMutableArray, BaseResponse;

@interface FinderLiveGetFanClubMembersResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (nonatomic) unsigned int memberCount;
@property (retain, nonatomic) NSMutableArray *members;
@property (retain, nonatomic) FinderLiveFanClubMember *audienceMember;
@property (nonatomic) unsigned int intimacyDistanceToPrevMember;
@property (nonatomic) unsigned int superFansCount;
@property (nonatomic) unsigned int audienceCurrentRank;

+ (void)initialize;

@end
