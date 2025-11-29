@class NSString;

@interface ShareListResponse_ResponseGroupData : IESLivePBBaseMessage

@property (nonatomic) long long groupId;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) double score;

+ (id)descriptor;

@end
