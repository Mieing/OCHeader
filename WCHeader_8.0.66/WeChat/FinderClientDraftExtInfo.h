@class FinderEventInfo, NSString, FinderMemberData, FinderMJPublisherInfo, FinderMusicReportInfo, NSMutableArray, FinderCropRectModel;

@interface FinderClientDraftExtInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int waitType;
@property (retain, nonatomic) FinderEventInfo *eventInfo;
@property (nonatomic) float coverTimeStamp;
@property (retain, nonatomic) FinderCropRectModel *cropRectModel;
@property (retain, nonatomic) NSMutableArray *coverWordInfo;
@property (nonatomic) unsigned int lbsFlagType;
@property (nonatomic) unsigned long long copyFromFeedId;
@property (retain, nonatomic) NSString *videoMusicId;
@property (retain, nonatomic) NSString *templateFollowFeedId;
@property (nonatomic) unsigned int needPostAtemplateComment;
@property (retain, nonatomic) FinderMemberData *memberData;
@property (retain, nonatomic) NSString *templateFollowFeedTemplateId;
@property (retain, nonatomic) FinderMJPublisherInfo *mjPublisherInfo;
@property (nonatomic) unsigned int videoSourceType;
@property (retain, nonatomic) NSString *musicFollowFeedId;
@property (nonatomic) float feedLongitude;
@property (nonatomic) float feedLatitude;
@property (nonatomic) unsigned int sourceEnterScene;
@property (retain, nonatomic) FinderMusicReportInfo *shootMusicReportInfo;
@property (retain, nonatomic) FinderMusicReportInfo *editMusicReportInfo;
@property (nonatomic) unsigned int coverSelectSource;

+ (void)initialize;

- (void)setCoverSelectSource:(unsigned int)a0;
- (unsigned int)coverSelectSource;
- (void)setEditMusicReportInfo:(id)a0;
- (id)editMusicReportInfo;
- (void)setShootMusicReportInfo:(id)a0;
- (id)shootMusicReportInfo;
- (void)setSourceEnterScene:(unsigned int)a0;
- (unsigned int)sourceEnterScene;
- (void)setFeedLatitude:(float)a0;
- (float)feedLatitude;
- (void)setFeedLongitude:(float)a0;
- (float)feedLongitude;
- (void)setMusicFollowFeedId:(id)a0;
- (id)musicFollowFeedId;
- (void)setVideoSourceType:(unsigned int)a0;
- (unsigned int)videoSourceType;
- (void)setMjPublisherInfo:(id)a0;
- (id)mjPublisherInfo;
- (void)setTemplateFollowFeedTemplateId:(id)a0;
- (id)templateFollowFeedTemplateId;
- (void)setMemberData:(id)a0;
- (id)memberData;
- (void)setNeedPostAtemplateComment:(unsigned int)a0;
- (unsigned int)needPostAtemplateComment;
- (void)setTemplateFollowFeedId:(id)a0;
- (id)templateFollowFeedId;
- (void)setVideoMusicId:(id)a0;
- (id)videoMusicId;
- (void)setCopyFromFeedId:(unsigned long long)a0;
- (unsigned long long)copyFromFeedId;
- (void)setLbsFlagType:(unsigned int)a0;
- (unsigned int)lbsFlagType;
- (void)setCoverWordInfo:(id)a0;
- (id)coverWordInfo;
- (void)setCropRectModel:(id)a0;
- (id)cropRectModel;
- (void)setCoverTimeStamp:(float)a0;
- (float)coverTimeStamp;
- (void)setEventInfo:(id)a0;
- (id)eventInfo;
- (void)setWaitType:(unsigned int)a0;
- (unsigned int)waitType;

@end
