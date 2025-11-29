@class NSString, IESLiveRealTimeChorusInfo, IESLiveChorusConcertSong;

@interface HTSLiveChorusInitContent : IESLivePBBaseMessage

@property (nonatomic) long long chorusId;
@property (retain, nonatomic) IESLiveRealTimeChorusInfo *chorusInfo;
@property (nonatomic) BOOL hasChorusInfo;
@property (retain, nonatomic) IESLiveChorusConcertSong *concertSong;
@property (nonatomic) BOOL hasConcertSong;
@property (copy, nonatomic) NSString *chorusIdStr;

+ (id)descriptor;

@end
