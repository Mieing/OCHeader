@class NSString, NSData, ClearPrevReddotFeedStrategy, NSMutableArray;

@interface FinderRedDotCtrlInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int priority;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSData *extInfo;
@property (retain, nonatomic) NSMutableArray *showInfos;
@property (retain, nonatomic) NSString *tipsId;
@property (nonatomic) unsigned int expireTime;
@property (nonatomic) unsigned int startTime;
@property (nonatomic) unsigned int ignoreDisplayTabType;
@property (nonatomic) BOOL ignoreValid;
@property (retain, nonatomic) NSString *internalFeedbackUrl;
@property (retain, nonatomic) NSString *selfFinderUsername;
@property (nonatomic) unsigned int finderSubRecallType;
@property (nonatomic) unsigned int liveSubRecallType;
@property (retain, nonatomic) NSString *reportExtInfo;
@property (retain, nonatomic) NSString *groupId;
@property (retain, nonatomic) NSData *reportCtrlInfo;
@property (retain, nonatomic) NSData *sessionBypassInfo;
@property (retain, nonatomic) NSString *tipsUuid;
@property (nonatomic) unsigned int saveStrategy;
@property (nonatomic) unsigned int businessType;
@property (retain, nonatomic) ClearPrevReddotFeedStrategy *clearPrevReddotFeedStrategy;
@property (retain, nonatomic) NSData *reddotExposeBuff;

+ (void)initialize;

- (void)setReddotExposeBuff:(id)a0;
- (id)reddotExposeBuff;
- (void)setClearPrevReddotFeedStrategy:(id)a0;
- (id)clearPrevReddotFeedStrategy;
- (void)setBusinessType:(unsigned int)a0;
- (unsigned int)businessType;
- (void)setSaveStrategy:(unsigned int)a0;
- (unsigned int)saveStrategy;
- (void)setTipsUuid:(id)a0;
- (id)tipsUuid;
- (void)setSessionBypassInfo:(id)a0;
- (id)sessionBypassInfo;
- (void)setReportCtrlInfo:(id)a0;
- (id)reportCtrlInfo;
- (void)setGroupId:(id)a0;
- (id)groupId;
- (void)setReportExtInfo:(id)a0;
- (id)reportExtInfo;
- (void)setLiveSubRecallType:(unsigned int)a0;
- (unsigned int)liveSubRecallType;
- (void)setFinderSubRecallType:(unsigned int)a0;
- (unsigned int)finderSubRecallType;
- (void)setSelfFinderUsername:(id)a0;
- (id)selfFinderUsername;
- (void)setInternalFeedbackUrl:(id)a0;
- (id)internalFeedbackUrl;
- (void)setIgnoreValid:(BOOL)a0;
- (BOOL)ignoreValid;
- (void)setIgnoreDisplayTabType:(unsigned int)a0;
- (unsigned int)ignoreDisplayTabType;
- (void)setStartTime:(unsigned int)a0;
- (unsigned int)startTime;
- (void)setExpireTime:(unsigned int)a0;
- (unsigned int)expireTime;
- (void)setTipsId:(id)a0;
- (id)tipsId;
- (void)setShowInfos:(id)a0;
- (id)showInfos;
- (void)setExtInfo:(id)a0;
- (id)extInfo;
- (void)setType:(unsigned int)a0;
- (unsigned int)type;
- (void)setPriority:(unsigned int)a0;
- (unsigned int)priority;

@end
