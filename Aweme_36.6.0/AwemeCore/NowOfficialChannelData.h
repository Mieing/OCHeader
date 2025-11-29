@class NSString;

@interface NowOfficialChannelData : IESLivePBBaseMessage

@property (nonatomic) long long roomId;
@property (copy, nonatomic) NSString *anchorId;

+ (id)descriptor;

@end
