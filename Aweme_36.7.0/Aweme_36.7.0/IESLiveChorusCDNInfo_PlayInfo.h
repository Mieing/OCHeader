@class NSString;

@interface IESLiveChorusCDNInfo_PlayInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *streamData;

+ (id)descriptor;

@end
