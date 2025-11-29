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

@end
