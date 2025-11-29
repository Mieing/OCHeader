@class NSString, NSMutableArray;

@interface SprMiaoJianBgmSearchMusicItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *musicId;
@property (retain, nonatomic) NSString *musicUrl;
@property (nonatomic) unsigned int musicBeginTime;
@property (retain, nonatomic) NSString *songName;
@property (retain, nonatomic) NSString *singerNames;
@property (retain, nonatomic) NSMutableArray *lyrics;

+ (void)initialize;

@end
