@class NSString;

@interface TingDownloadInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *audioPath;
@property (retain, nonatomic) NSString *coverPath;
@property (retain, nonatomic) NSString *lyricsText;
@property (nonatomic) unsigned int type;

+ (void)initialize;

@end
