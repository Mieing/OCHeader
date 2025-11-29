@class HTSLiveAudioBGData;

@interface GetLatestBGResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveAudioBGData *bg;
@property (nonatomic) BOOL hasBg;

+ (id)descriptor;

@end
