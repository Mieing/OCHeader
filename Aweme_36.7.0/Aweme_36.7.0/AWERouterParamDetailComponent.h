@class NSString, NSMutableDictionary, AWEUserProfileEventCommonParamsHandler, NSNumber;

@interface AWERouterParamDetailComponent : AWEUserDetailBaseComponent <AWERouterParamDetailComponentProtocol>

@property (nonatomic) BOOL isFromFamiliar;
@property (retain, nonatomic) NSNumber *liveUserType;
@property (retain, nonatomic) NSString *liveRoomID;
@property (retain, nonatomic) NSString *liveAnchorID;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *enterFromRequestID;
@property (copy, nonatomic) NSString *ruleId;
@property (nonatomic) unsigned long long modernFeedEventSource;
@property (copy, nonatomic) NSString *musicID;
@property (retain, nonatomic) AWEUserProfileEventCommonParamsHandler *eventCommonParamsHandler;
@property (retain, nonatomic) NSMutableDictionary *mobReport;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterType;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *enterFromMerge;
@property (copy, nonatomic) NSString *enterPosition;
@property (retain, nonatomic) NSMutableDictionary *tracker;
@property (copy, nonatomic) NSString *gdLabel;
@property (copy, nonatomic) NSString *cardType;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)onConfigWithRouterParamDict:(id)a0;
- (void)configEventParamWithRouterParamDict:(id)a0;
- (void)configGeneralParamWithRouterParamDict:(id)a0;
- (void)configTrackerJsonWithRouterParamDict:(id)a0;
- (void)configGDLabelWithRouterParamDict:(id)a0;
- (void)configMobReportWithRouterParamDict:(id)a0;
- (void).cxx_destruct;
- (void)onInit;

@end
