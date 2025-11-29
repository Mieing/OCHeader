@class NSString;

@interface MediaInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int source;
@property (nonatomic) unsigned int mediaType;
@property (nonatomic) unsigned int videoPlayLength;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned int startTime;

+ (void)initialize;

@end
