@class NSNumber, NSString, FlutterStandardTypedData;

@interface BizEnterStatusInfo : NSObject

@property (retain, nonatomic) NSNumber *enterSource;
@property (retain, nonatomic) NSNumber *openArticleFromScene;
@property (retain, nonatomic) NSNumber *isTeenMode;
@property (retain, nonatomic) NSNumber *redDotCount;
@property (retain, nonatomic) NSNumber *pos;
@property (retain, nonatomic) NSNumber *finderLiveRedDotType;
@property (copy, nonatomic) NSString *finderFeedExportId;
@property (retain, nonatomic) NSNumber *exposeMsgType;
@property (copy, nonatomic) NSString *exposeUserName;
@property (retain, nonatomic) NSNumber *lastExposeId;
@property (retain, nonatomic) NSNumber *lastExposeMsgId;
@property (retain, nonatomic) NSNumber *lastExposeMid;
@property (retain, nonatomic) NSNumber *sessionId;
@property (retain, nonatomic) NSNumber *enterTime;
@property (copy, nonatomic) NSString *netType;
@property (retain, nonatomic) NSNumber *isHeadsetOn;
@property (retain, nonatomic) FlutterStandardTypedData *redDotReportItem;
@property (retain, nonatomic) NSNumber *createEngineGroup;
@property (retain, nonatomic) NSNumber *createEngine;
@property (retain, nonatomic) NSNumber *startOpenTime;
@property (retain, nonatomic) NSNumber *endOnEnterTime;
@property (retain, nonatomic) NSNumber *startCreateEngineGroupTime;
@property (retain, nonatomic) NSNumber *startCreateEngineTime;
@property (retain, nonatomic) NSNumber *startShowFlutterPageTime;
@property (retain, nonatomic) NSNumber *firstGroupMsgCount;
@property (copy, nonatomic) NSString *reddotReportInfo;

+ (id)makeWithEnterSource:(id)a0 openArticleFromScene:(id)a1 isTeenMode:(id)a2 redDotCount:(id)a3 pos:(id)a4 finderLiveRedDotType:(id)a5 finderFeedExportId:(id)a6 exposeMsgType:(id)a7 exposeUserName:(id)a8 lastExposeId:(id)a9 lastExposeMsgId:(id)a10 lastExposeMid:(id)a11 sessionId:(id)a12 enterTime:(id)a13 netType:(id)a14 isHeadsetOn:(id)a15 redDotReportItem:(id)a16 createEngineGroup:(id)a17 createEngine:(id)a18 startOpenTime:(id)a19 endOnEnterTime:(id)a20 startCreateEngineGroupTime:(id)a21 startCreateEngineTime:(id)a22 startShowFlutterPageTime:(id)a23 firstGroupMsgCount:(id)a24 reddotReportInfo:(id)a25;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
