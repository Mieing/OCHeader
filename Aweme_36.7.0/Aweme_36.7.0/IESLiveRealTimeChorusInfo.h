@class NSString, IESLiveChorusConcertSong;

@interface IESLiveRealTimeChorusInfo : IESLivePBBaseMessage

@property (nonatomic) long long chorusId;
@property (nonatomic) long long dressId;
@property (nonatomic) int stage;
@property (copy, nonatomic) NSString *chorusIdStr;
@property (nonatomic) long long cdnSingerOnly;
@property (retain, nonatomic) IESLiveChorusConcertSong *concertSong;
@property (nonatomic) BOOL hasConcertSong;

+ (id)descriptor;

@end
