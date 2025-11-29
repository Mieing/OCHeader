@class NSString, NSMutableDictionary, FinderLiveNoticeInfo;

@interface WCFinderLiveAudienceNoticeReportStruct : NSObject

@property (copy, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long actionType;
@property (nonatomic) unsigned long long enterLiveID;
@property (nonatomic) unsigned long long enterStatus;
@property (copy, nonatomic) NSString *commentScene;
@property (copy, nonatomic) NSString *sceneNote;
@property (copy, nonatomic) NSString *addData;
@property (copy, nonatomic) NSString *forceNoticeID;
@property (copy, nonatomic) NSString *noticeType;
@property (copy, nonatomic) NSString *feedID;
@property (copy, nonatomic) NSString *sessionBuffer;
@property (retain, nonatomic) NSMutableDictionary *channelExtra;
@property (copy, nonatomic) NSString *channelExtraString;
@property (retain, nonatomic) NSMutableDictionary *scene;
@property (retain, nonatomic) FinderLiveNoticeInfo *noticeInfo;

+ (id)replaceCommaToSemicolon:(id)a0;

- (id)init;
- (id)toLogStr;
- (id)toLogStrForForceNotice;
- (void).cxx_destruct;

@end
