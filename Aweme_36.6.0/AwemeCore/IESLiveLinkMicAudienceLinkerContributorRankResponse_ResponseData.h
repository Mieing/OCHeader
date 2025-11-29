@class NSString, NSMutableArray;

@interface IESLiveLinkMicAudienceLinkerContributorRankResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *ranksArray;
@property (readonly, nonatomic) unsigned long long ranksArray_Count;
@property (copy, nonatomic) NSString *currency;

+ (id)descriptor;

@end
