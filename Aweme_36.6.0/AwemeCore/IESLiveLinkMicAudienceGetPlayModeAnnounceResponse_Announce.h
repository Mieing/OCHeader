@class NSString;

@interface IESLiveLinkMicAudienceGetPlayModeAnnounceResponse_Announce : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *announceId;
@property (copy, nonatomic) NSString *content;

+ (id)descriptor;

@end
