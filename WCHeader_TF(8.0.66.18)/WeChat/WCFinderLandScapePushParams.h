@class NSString;

@interface WCFinderLandScapePushParams : NSObject

@property (copy, nonatomic) NSString *reportExtraInfo;
@property (nonatomic) BOOL forbidCheckLimitMode;
@property (nonatomic) BOOL isInsideFinder;
@property (copy, nonatomic) NSString *firstFeedSessionBuf;
@property (nonatomic) BOOL needPausePlayWhenViewWillDisappear;
@property (nonatomic) BOOL canShowContinuePlayTips;
@property (nonatomic) BOOL ignoreUpdateContextId;
@property (nonatomic) BOOL allowScaleAspectFit;
@property (nonatomic) BOOL landScapeViewPreFetchContinuePlayFeed;
@property (nonatomic) long long autoMinimizeValue;
@property (readonly, nonatomic) BOOL autoMinimize;
@property (readonly, nonatomic) BOOL autoStaticMinimize;
@property (readonly, nonatomic) BOOL autoVideoMinimize;
@property (nonatomic) BOOL enterFromMinimize;
@property (nonatomic) long long autoPip;
@property (retain, nonatomic) NSString *playSessionId;
@property (nonatomic) int getRelatedListScene;
@property (copy, nonatomic) NSString *fromSessionId;

+ (id)createWithReportExtraInfo:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
