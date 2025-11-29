@class NSString;

@interface GetFrequentlyChatContentResponse_ContentMeta : IESLivePBBaseMessage

@property (nonatomic) long long contentId;
@property (copy, nonatomic) NSString *content;

+ (id)descriptor;

@end
