@class NSString, IESLiveOrderSongUser;

@interface IESLiveChorusConcertSong : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *songName;
@property (retain, nonatomic) IESLiveOrderSongUser *orderUser;
@property (nonatomic) BOOL hasOrderUser;

+ (id)descriptor;

@end
