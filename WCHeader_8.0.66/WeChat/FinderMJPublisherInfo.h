@class NSString, NSData;

@interface FinderMJPublisherInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *mjPublisherSessionId;
@property (retain, nonatomic) NSData *mjPublisherScTemplateSessionBuffer;
@property (retain, nonatomic) NSString *mjPublisherEntryType;
@property (nonatomic) BOOL isDuetShoot;
@property (nonatomic) unsigned int mjPublisherExportScene;
@property (retain, nonatomic) NSString *mjPublisherScTemplateTabId;
@property (retain, nonatomic) NSString *sourceFeedId;
@property (retain, nonatomic) NSString *sourceSongId;
@property (retain, nonatomic) NSString *followFeedTemplateId;
@property (retain, nonatomic) NSString *mjPublisherScTemplateId;
@property (nonatomic) int mjPublisherScTemplatePosition;
@property (nonatomic) BOOL isScAssetGenerate;
@property (nonatomic) unsigned int mjPublisherCreationPageId;
@property (nonatomic) unsigned int isFromMovieTemplate;
@property (nonatomic) BOOL scTemplateIsFavorite;
@property (nonatomic) unsigned int mjPublisherTemplateType;
@property (nonatomic) BOOL scTemplateIsAigc;

+ (void)initialize;

- (void)setScTemplateIsAigc:(BOOL)a0;
- (BOOL)scTemplateIsAigc;
- (void)setMjPublisherTemplateType:(unsigned int)a0;
- (unsigned int)mjPublisherTemplateType;
- (void)setScTemplateIsFavorite:(BOOL)a0;
- (BOOL)scTemplateIsFavorite;
- (void)setIsFromMovieTemplate:(unsigned int)a0;
- (unsigned int)isFromMovieTemplate;
- (void)setMjPublisherCreationPageId:(unsigned int)a0;
- (unsigned int)mjPublisherCreationPageId;
- (void)setIsScAssetGenerate:(BOOL)a0;
- (BOOL)isScAssetGenerate;
- (void)setMjPublisherScTemplatePosition:(int)a0;
- (int)mjPublisherScTemplatePosition;
- (void)setMjPublisherScTemplateId:(id)a0;
- (id)mjPublisherScTemplateId;
- (void)setFollowFeedTemplateId:(id)a0;
- (id)followFeedTemplateId;
- (void)setSourceSongId:(id)a0;
- (id)sourceSongId;
- (void)setSourceFeedId:(id)a0;
- (id)sourceFeedId;
- (void)setMjPublisherScTemplateTabId:(id)a0;
- (id)mjPublisherScTemplateTabId;
- (void)setMjPublisherExportScene:(unsigned int)a0;
- (unsigned int)mjPublisherExportScene;
- (void)setIsDuetShoot:(BOOL)a0;
- (BOOL)isDuetShoot;
- (void)setMjPublisherEntryType:(id)a0;
- (id)mjPublisherEntryType;
- (void)setMjPublisherScTemplateSessionBuffer:(id)a0;
- (id)mjPublisherScTemplateSessionBuffer;
- (void)setMjPublisherSessionId:(id)a0;
- (id)mjPublisherSessionId;

@end
