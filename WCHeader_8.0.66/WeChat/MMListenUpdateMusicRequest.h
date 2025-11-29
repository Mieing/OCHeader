@class BaseRequest, NSString;

@interface MMListenUpdateMusicRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) int type;
@property (retain, nonatomic) NSString *listenId;
@property (retain, nonatomic) NSString *songName;
@property (retain, nonatomic) NSString *lyric;

+ (void)initialize;

@end
