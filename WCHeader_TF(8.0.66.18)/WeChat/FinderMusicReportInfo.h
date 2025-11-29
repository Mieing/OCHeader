@class NSString;

@interface FinderMusicReportInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *queryWord;
@property (retain, nonatomic) NSString *musicId;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int sourceScene;
@property (nonatomic) unsigned int isAttachMusic;
@property (nonatomic) unsigned int isAttachLyric;
@property (nonatomic) unsigned int isCloseSound;
@property (nonatomic) unsigned int bgmPanelIndex;
@property (nonatomic) unsigned int selectType;

+ (void)initialize;

- (void)setSelectType:(unsigned int)a0;
- (unsigned int)selectType;
- (void)setBgmPanelIndex:(unsigned int)a0;
- (unsigned int)bgmPanelIndex;
- (void)setIsCloseSound:(unsigned int)a0;
- (unsigned int)isCloseSound;
- (void)setIsAttachLyric:(unsigned int)a0;
- (unsigned int)isAttachLyric;
- (void)setIsAttachMusic:(unsigned int)a0;
- (unsigned int)isAttachMusic;
- (void)setSourceScene:(unsigned int)a0;
- (unsigned int)sourceScene;
- (void)setScene:(unsigned int)a0;
- (unsigned int)scene;
- (void)setType:(unsigned int)a0;
- (unsigned int)type;
- (void)setMusicId:(id)a0;
- (id)musicId;

@end
