@class NSString;

@interface MMListenBroadcastInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *audioUrl;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *author;
@property (retain, nonatomic) NSString *cover;
@property (nonatomic) long long createTime;
@property (nonatomic) int duration;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) BOOL isPlayable;

+ (void)initialize;

@end
