@class FinderMemberSecConf, FinderMemberQAPagedParam, NSMutableArray, BaseResponse;

@interface FinderMemberQAPagedGetQAListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderMemberQAPagedParam *pagedParam;
@property (retain, nonatomic) NSMutableArray *objects;
@property (retain, nonatomic) FinderMemberSecConf *secConf;

+ (void)initialize;

@end
