@class NSString;

@interface TingTaskPlayingInfoRecord : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *listenId;
@property (nonatomic) int pos;
@property (nonatomic) BOOL finished;

+ (void)initialize;

@end
