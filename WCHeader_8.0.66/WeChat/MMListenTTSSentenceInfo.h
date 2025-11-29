@class NSString;

@interface MMListenTTSSentenceInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int index;
@property (nonatomic) unsigned int duration;
@property (retain, nonatomic) NSString *playUrl;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) int format;
@property (nonatomic) unsigned int ttsStatus;

+ (void)initialize;

@end
