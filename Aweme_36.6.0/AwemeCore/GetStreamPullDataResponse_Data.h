@class HTSLiveStreamUrl;

@interface GetStreamPullDataResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveStreamUrl *streamURL;
@property (nonatomic) BOOL hasStreamURL;

+ (id)descriptor;

@end
