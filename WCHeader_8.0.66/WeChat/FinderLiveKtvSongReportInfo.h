@class NSString;

@interface FinderLiveKtvSongReportInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int addSourceType;
@property (nonatomic) unsigned int addBoardType;
@property (retain, nonatomic) NSString *addBoardName;
@property (nonatomic) unsigned int addSubBoardType;
@property (retain, nonatomic) NSString *addSubBoardName;
@property (retain, nonatomic) NSString *phoneType;
@property (nonatomic) unsigned int audioType;
@property (nonatomic) unsigned int sourceScene;

+ (void)initialize;

@end
