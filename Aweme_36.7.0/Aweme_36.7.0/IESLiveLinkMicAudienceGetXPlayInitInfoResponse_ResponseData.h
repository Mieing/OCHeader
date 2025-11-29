@class HTSLiveXplayInitContent;

@interface IESLiveLinkMicAudienceGetXPlayInitInfoResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveXplayInitContent *xplayInitContent;
@property (nonatomic) BOOL hasXplayInitContent;

+ (id)descriptor;

@end
