@class NSString;

@interface IESLiveLinkMicAudienceFinishResponse_ResponseData : IESLivePBBaseMessage

@property (nonatomic) long long totalApply;
@property (nonatomic) long long totalLinked;
@property (copy, nonatomic) NSString *liveCoreExtInfo;

+ (id)descriptor;

@end
