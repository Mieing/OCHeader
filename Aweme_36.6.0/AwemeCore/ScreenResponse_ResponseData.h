@class NSData;

@interface ScreenResponse_ResponseData : IESLivePBBaseMessage

@property (copy, nonatomic) NSData *episodeInfo;

+ (id)descriptor;

@end
