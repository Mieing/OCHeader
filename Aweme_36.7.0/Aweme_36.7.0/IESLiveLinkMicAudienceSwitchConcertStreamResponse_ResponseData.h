@class IESLiveChorusCDNInfo;

@interface IESLiveLinkMicAudienceSwitchConcertStreamResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveChorusCDNInfo *subscribeCdnInfo;
@property (nonatomic) BOOL hasSubscribeCdnInfo;

+ (id)descriptor;

@end
