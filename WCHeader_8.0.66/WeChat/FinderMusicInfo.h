@class NSString, FinderVideoTemplateTopicInfo;

@interface FinderMusicInfo : WXPBGeneratedMessage <WCTColumnCoding>

@property (retain, nonatomic) NSString *docId;
@property (retain, nonatomic) NSString *albumThumbUrl;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *artist;
@property (retain, nonatomic) NSString *albumName;
@property (retain, nonatomic) NSString *mediaStreamingUrl;
@property (retain, nonatomic) NSString *miniappInfo;
@property (retain, nonatomic) NSString *webUrl;
@property (retain, nonatomic) NSString *floatThumbUrl;
@property (nonatomic) unsigned int musicPlayLen;
@property (nonatomic) unsigned int chorusBegin;
@property (nonatomic) unsigned int chorusEnd;
@property (nonatomic) unsigned int musicFlag;
@property (nonatomic) unsigned int payType;
@property (retain, nonatomic) NSString *highUrl;
@property (nonatomic) unsigned int docType;
@property (retain, nonatomic) NSString *songId;
@property (nonatomic) unsigned int isTrySong;
@property (retain, nonatomic) NSString *lrcContent;
@property (retain, nonatomic) NSString *identification;
@property (retain, nonatomic) NSString *messageExt;
@property (retain, nonatomic) FinderVideoTemplateTopicInfo *videoTemplateInfo;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;
+ (void)initialize;

- (void)setVideoTemplateInfo:(id)a0;
- (id)videoTemplateInfo;
- (void)setMessageExt:(id)a0;
- (id)messageExt;
- (void)setIdentification:(id)a0;
- (id)identification;
- (void)setLrcContent:(id)a0;
- (id)lrcContent;
- (void)setIsTrySong:(unsigned int)a0;
- (unsigned int)isTrySong;
- (void)setSongId:(id)a0;
- (id)songId;
- (void)setDocType:(unsigned int)a0;
- (unsigned int)docType;
- (void)setHighUrl:(id)a0;
- (id)highUrl;
- (void)setPayType:(unsigned int)a0;
- (unsigned int)payType;
- (void)setMusicFlag:(unsigned int)a0;
- (unsigned int)musicFlag;
- (void)setChorusEnd:(unsigned int)a0;
- (unsigned int)chorusEnd;
- (void)setChorusBegin:(unsigned int)a0;
- (unsigned int)chorusBegin;
- (void)setMusicPlayLen:(unsigned int)a0;
- (unsigned int)musicPlayLen;
- (void)setFloatThumbUrl:(id)a0;
- (id)floatThumbUrl;
- (void)setWebUrl:(id)a0;
- (id)webUrl;
- (void)setMiniappInfo:(id)a0;
- (id)miniappInfo;
- (void)setMediaStreamingUrl:(id)a0;
- (id)mediaStreamingUrl;
- (void)setAlbumName:(id)a0;
- (id)albumName;
- (void)setArtist:(id)a0;
- (id)artist;
- (void)setName:(id)a0;
- (id)name;
- (void)setAlbumThumbUrl:(id)a0;
- (id)albumThumbUrl;
- (void)setDocId:(id)a0;
- (id)docId;
- (id)archivedWCTValue;

@end
