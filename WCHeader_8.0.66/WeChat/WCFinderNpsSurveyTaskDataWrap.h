@class NSString, FinderNpsSurveyInfo, FinderNpsSurveyQuestion, NSMutableArray, FinderNpsSurveyTaskConf;

@interface WCFinderNpsSurveyTaskDataWrap : NSObject <PBCoding>

@property (retain, nonatomic) FinderNpsSurveyTaskConf *surveyTaskConf;
@property (retain, nonatomic) FinderNpsSurveyInfo *surveyInfo;
@property (nonatomic) unsigned int surveyStatus;
@property (copy, nonatomic) NSString *shownInFeedID;
@property (copy, nonatomic) NSString *boundToFeedID;
@property (retain, nonatomic) FinderNpsSurveyQuestion *showingSurveyQuestion;
@property (retain, nonatomic) NSMutableArray *trackInfoList;
@property (nonatomic) unsigned long long surveyShownCount;
@property (nonatomic) unsigned long long triggerSource;
@property (nonatomic) unsigned long long startShowTimestamp;
@property (nonatomic) unsigned long long endShowTimestamp;
@property (nonatomic) unsigned long long showTimestamp;
@property (nonatomic) unsigned long long selectTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_surveyTaskConf;
+ (void)PBArrayAdd_surveyInfo;
+ (void)PBArrayAdd_surveyStatus;
+ (void)PBArrayAdd_shownInFeedID;
+ (void)PBArrayAdd_boundToFeedID;
+ (void)initialize;

- (id)getPBPropertyTable;
- (BOOL)isSurveyHasShownInFeedID:(id)a0;
- (BOOL)isSurveyHasBoundToFeedID:(id)a0;
- (BOOL)isAvailableSurveyWithTriggerEvent:(long long)a0 contextInfo:(id)a1;
- (id)genReportKVInfoJsonWithContextInfo:(id)a0;
- (void).cxx_destruct;

@end
