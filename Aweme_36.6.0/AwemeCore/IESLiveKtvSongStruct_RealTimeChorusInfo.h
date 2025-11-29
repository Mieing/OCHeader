@class NSString;

@interface IESLiveKtvSongStruct_RealTimeChorusInfo : IESLivePBBaseMessage

@property (nonatomic) long long chorusId;
@property (copy, nonatomic) NSString *chorusIdStr;

+ (id)descriptor;

@end
