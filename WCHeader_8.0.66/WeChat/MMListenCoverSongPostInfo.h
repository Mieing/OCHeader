@class NSString;

@interface MMListenCoverSongPostInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *coveredSongListenId;
@property (nonatomic) unsigned long long sectionBegin;
@property (nonatomic) unsigned long long sectionEnd;
@property (retain, nonatomic) NSString *finderUsername;

+ (void)initialize;

@end
