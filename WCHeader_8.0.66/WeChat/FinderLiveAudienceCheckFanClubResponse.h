@class FinderLiveFanClubMember, NSMutableArray, BaseResponse;

@interface FinderLiveAudienceCheckFanClubResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) BOOL isFanClubMember;
@property (retain, nonatomic) FinderLiveFanClubMember *audienceMember;
@property (retain, nonatomic) NSMutableArray *productList;

+ (void)initialize;

@end
