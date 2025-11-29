@class NSString, NSMutableArray;

@interface SnsMusicInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *musicId;
@property (retain, nonatomic) NSString *musicUrl;
@property (nonatomic) unsigned int musicBeginTime;
@property (retain, nonatomic) NSString *songName;
@property (retain, nonatomic) NSString *singerName;
@property (retain, nonatomic) NSMutableArray *lyrics;

+ (void)initialize;

@end
