@class NSString;

@interface WAReportMainFrameTaskBarActionItem : WAReportBaseItem

@property (nonatomic) unsigned int openTime;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) unsigned long long lastStartTime;
@property (nonatomic) unsigned long long lastStartTimeInMs;
@property (nonatomic) unsigned int appCountWhenOpen;
@property (nonatomic) unsigned int appCountWhenClose;
@property (nonatomic) unsigned int closeReason;
@property (nonatomic) unsigned int scrollCount;
@property (copy, nonatomic) NSString *openAppIdList;
@property (nonatomic) unsigned int deleteAppCount;
@property (copy, nonatomic) NSString *deleteAppIdList;
@property (nonatomic) unsigned int whyDragMeCountWhenClose;
@property (nonatomic) unsigned int starCountWhenOpen;
@property (nonatomic) unsigned int starCountWhenClose;
@property (nonatomic) unsigned int starScrollCount;
@property (copy, nonatomic) NSString *openStarAppIdList;
@property (nonatomic) unsigned int deleteStarAppCount;
@property (copy, nonatomic) NSString *deleteStarAppIdList;
@property (nonatomic) unsigned int moveStarToTopCount;
@property (copy, nonatomic) NSString *appClickPositionList;
@property (copy, nonatomic) NSString *starAppClickPositionList;
@property (copy, nonatomic) NSString *moveStarToTopAppIdList;
@property (nonatomic) unsigned int addToStarAppCount;
@property (copy, nonatomic) NSString *addToStarAppIdList;
@property (nonatomic) unsigned int isFullScreen;
@property (copy, nonatomic) NSString *moveStarToFrontAppIdList;
@property (copy, nonatomic) NSString *moveStarToAfterAppIdList;
@property (nonatomic) unsigned int moveStarToFrontCount;
@property (nonatomic) unsigned int moveStarToAfterCount;
@property (nonatomic) unsigned int slideUpDownCount;
@property (nonatomic) unsigned int searchAppearCount;
@property (nonatomic) unsigned int searchActiveCount;
@property (nonatomic) unsigned int isUsingDynamicBackground;
@property (nonatomic) unsigned int recentMaxShowLines;
@property (nonatomic) unsigned long long recentCurrentShowLines;
@property (nonatomic) unsigned int countPerLine;
@property (copy, nonatomic) NSString *openSession;

- (id)reportString;
- (void).cxx_destruct;

@end
