@class IESLiveLinkmicMediaParam;

@interface GetPersonalKaraokeMediaInfoResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkmicMediaParam *linkmicMediaParam;
@property (nonatomic) BOOL hasLinkmicMediaParam;

+ (id)descriptor;

@end
