@class NSString;

@interface MMListenTTSInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *mediaId;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) int duration;
@property (nonatomic) int format;
@property (nonatomic) int seektime;
@property (nonatomic) BOOL isNewsFlush;

+ (void)initialize;

@end
