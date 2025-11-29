@class NSString, FinderContact;

@interface FinderCourseInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long courseTopicId;
@property (retain, nonatomic) NSString *courseName;
@property (retain, nonatomic) NSString *courseDesc;
@property (retain, nonatomic) NSString *coverImgUrl;
@property (nonatomic) unsigned int feedCount;
@property (nonatomic) unsigned int buyCount;
@property (nonatomic) unsigned int feedSortId;
@property (nonatomic) unsigned int lastUpdateTime;
@property (nonatomic) unsigned long long resumeObjectId;
@property (nonatomic) unsigned int feedPosId;
@property (nonatomic) unsigned int price;
@property (retain, nonatomic) FinderContact *contact;
@property (nonatomic) unsigned int tryOutFlag;
@property (nonatomic) unsigned int isInvalid;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;
+ (void)initialize;

- (void)setIsInvalid:(unsigned int)a0;
- (unsigned int)isInvalid;
- (void)setTryOutFlag:(unsigned int)a0;
- (unsigned int)tryOutFlag;
- (void)setContact:(id)a0;
- (id)contact;
- (void)setPrice:(unsigned int)a0;
- (unsigned int)price;
- (void)setFeedPosId:(unsigned int)a0;
- (unsigned int)feedPosId;
- (void)setResumeObjectId:(unsigned long long)a0;
- (unsigned long long)resumeObjectId;
- (void)setLastUpdateTime:(unsigned int)a0;
- (unsigned int)lastUpdateTime;
- (void)setFeedSortId:(unsigned int)a0;
- (unsigned int)feedSortId;
- (void)setBuyCount:(unsigned int)a0;
- (unsigned int)buyCount;
- (void)setFeedCount:(unsigned int)a0;
- (unsigned int)feedCount;
- (void)setCoverImgUrl:(id)a0;
- (id)coverImgUrl;
- (void)setCourseDesc:(id)a0;
- (id)courseDesc;
- (void)setCourseName:(id)a0;
- (id)courseName;
- (void)setCourseTopicId:(unsigned long long)a0;
- (unsigned long long)courseTopicId;
- (id)archivedWCTValue;

@end
