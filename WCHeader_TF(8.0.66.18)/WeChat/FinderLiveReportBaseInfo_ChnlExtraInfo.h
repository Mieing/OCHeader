@class NSString, FinderLiveReportBaseInfo_ChnlExtraInfo_RefData;

@interface FinderLiveReportBaseInfo_ChnlExtraInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long fromFeedId;
@property (nonatomic) unsigned int headEnterType;
@property (nonatomic) unsigned long long tabId;
@property (nonatomic) unsigned long long subTabId;
@property (retain, nonatomic) NSString *cardTag;
@property (nonatomic) unsigned long long cardSize;
@property (nonatomic) unsigned int tilingSwitch;
@property (nonatomic) unsigned int pagePosition;
@property (retain, nonatomic) NSString *refCommentscene;
@property (nonatomic) unsigned long long refEntersessionid;
@property (retain, nonatomic) NSString *shareUsername;
@property (retain, nonatomic) NSString *shareChatUsername;
@property (retain, nonatomic) FinderLiveReportBaseInfo_ChnlExtraInfo_RefData *refData;
@property (nonatomic) int shareScene;

+ (void)initialize;

@end
