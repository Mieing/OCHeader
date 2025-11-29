@class FinderMusicInfo, FinderMemberData, FinderNewLifeDesc, FinderFromAppInfo, FinderOriginalDesc, FinderLocation, OriginalSoundInfo, FinderExtendedReading, NSMutableArray, NSString, FinderVideoTemplateInfo, FinderGeneralReportInfo, FinderModFeedInfo, FinderFollowPostInfo, FinderLongVideoDesc, FinderTopic, FinderTemplateInfo, FinderClientDraftExtInfo, FinderMediaExtra, FinderTopicHashTagDesc, FinderFlowCardDesc, FinderMVInfo, FinderObjectEventDesc, FinderLiveDesc, FinderObjectBGMInfo, FinderMemberQAVO, FinderSimpleTopicInfo;

@interface FinderObjectDesc : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *description;
@property (retain, nonatomic) NSMutableArray *media;
@property (nonatomic) unsigned int mediaType;
@property (retain, nonatomic) FinderMediaExtra *extra;
@property (retain, nonatomic) FinderLocation *location;
@property (retain, nonatomic) FinderExtendedReading *extReading;
@property (retain, nonatomic) FinderTopic *topic;
@property (retain, nonatomic) NSMutableArray *mentionedUser;
@property (retain, nonatomic) FinderLiveDesc *liveDesc;
@property (retain, nonatomic) FinderLocation *feedLocation;
@property (retain, nonatomic) NSMutableArray *mentionedMusics;
@property (retain, nonatomic) FinderLongVideoDesc *longVideoDesc;
@property (retain, nonatomic) FinderMusicInfo *imgFeedBgmInfo;
@property (retain, nonatomic) FinderObjectBGMInfo *followPostInfo;
@property (retain, nonatomic) FinderFromAppInfo *fromApp;
@property (retain, nonatomic) FinderTemplateInfo *tmplInfo;
@property (retain, nonatomic) FinderObjectEventDesc *event;
@property (retain, nonatomic) FinderMVInfo *mvInfo;
@property (nonatomic) unsigned long long draftObjectId;
@property (retain, nonatomic) FinderClientDraftExtInfo *clientDraftExtInfo;
@property (retain, nonatomic) FinderMusicInfo *musicInfo;
@property (retain, nonatomic) FinderVideoTemplateInfo *videoTmplInfo;
@property (retain, nonatomic) FinderGeneralReportInfo *generalReportInfo;
@property (retain, nonatomic) OriginalSoundInfo *originalsoundInfo;
@property (retain, nonatomic) FinderLocation *posterLocation;
@property (retain, nonatomic) NSMutableArray *shortTitle;
@property (retain, nonatomic) FinderFlowCardDesc *flowCardDesc;
@property (retain, nonatomic) FinderOriginalDesc *originalInfoDesc;
@property (retain, nonatomic) FinderNewLifeDesc *finderNewlifeDesc;
@property (retain, nonatomic) FinderMemberQAVO *memberQaVo;
@property (retain, nonatomic) FinderMemberData *memberData;
@property (retain, nonatomic) FinderTopicHashTagDesc *hashTagDesc;
@property (retain, nonatomic) FinderFollowPostInfo *generalFollowPostInfo;
@property (retain, nonatomic) NSString *highlightDescription;
@property (retain, nonatomic) FinderModFeedInfo *modFeedInfo;
@property (retain, nonatomic) FinderSimpleTopicInfo *simpleTopicInfo;

+ (void)initialize;

@end
