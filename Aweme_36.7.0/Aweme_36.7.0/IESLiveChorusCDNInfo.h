@class NSString, IESLiveChorusCDNInfo_PushInfo, IESLiveChorusCDNInfo_PlayInfo;

@interface IESLiveChorusCDNInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *stream;
@property (retain, nonatomic) IESLiveChorusCDNInfo_PlayInfo *playInfo;
@property (nonatomic) BOOL hasPlayInfo;
@property (retain, nonatomic) IESLiveChorusCDNInfo_PushInfo *pushInfo;
@property (nonatomic) BOOL hasPushInfo;

+ (id)descriptor;

@end
