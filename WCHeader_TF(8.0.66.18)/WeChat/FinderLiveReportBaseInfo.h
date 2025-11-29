@class NSString, FinderLiveReportBaseInfo_ChnlExtraInfo, FinderLiveReportBaseInfo_JoinliveExtraInfo;

@interface FinderLiveReportBaseInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *clickSubTabContextId;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned long long enterSessionId;
@property (nonatomic) unsigned long long actionTs;
@property (retain, nonatomic) NSString *scenenoteAppid;
@property (retain, nonatomic) NSString *chnlExposeType;
@property (nonatomic) unsigned long long enterEntrance;
@property (retain, nonatomic) NSString *chnlEnterImmerseType;
@property (nonatomic) unsigned long long enterIconType;
@property (nonatomic) unsigned long long refObjectId;
@property (nonatomic) unsigned int mainPagePosition;
@property (nonatomic) unsigned int noticeType;
@property (retain, nonatomic) NSString *chnlSessionBuffer;
@property (nonatomic) unsigned int adFlag;
@property (retain, nonatomic) NSString *pullCommentScene;
@property (nonatomic) unsigned int relatedLiveShowPos;
@property (retain, nonatomic) FinderLiveReportBaseInfo_ChnlExtraInfo *chnlExtra;
@property (retain, nonatomic) FinderLiveReportBaseInfo_JoinliveExtraInfo *joinliveExtraInfo;
@property (retain, nonatomic) NSString *legacyCommentScene;

+ (void)initialize;

@end
