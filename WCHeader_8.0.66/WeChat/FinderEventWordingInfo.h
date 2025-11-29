@class NSString;

@interface FinderEventWordingInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *feedPrefix;
@property (retain, nonatomic) NSString *describePrefix;
@property (retain, nonatomic) NSString *joininTimes;
@property (retain, nonatomic) NSString *joininButton;
@property (retain, nonatomic) NSString *pageDescribe;
@property (nonatomic) BOOL showPageDescribe;
@property (nonatomic) BOOL showPageNotice;
@property (retain, nonatomic) NSString *endButton;
@property (retain, nonatomic) NSString *shareFrom;
@property (retain, nonatomic) NSString *exitButton;
@property (retain, nonatomic) NSString *exitHint;
@property (retain, nonatomic) NSString *customJoininTimesWording;
@property (retain, nonatomic) NSString *joinButtonIconUrl;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;
+ (void)initialize;

- (void)setJoinButtonIconUrl:(id)a0;
- (id)joinButtonIconUrl;
- (void)setCustomJoininTimesWording:(id)a0;
- (id)customJoininTimesWording;
- (void)setExitHint:(id)a0;
- (id)exitHint;
- (void)setExitButton:(id)a0;
- (id)exitButton;
- (void)setShareFrom:(id)a0;
- (id)shareFrom;
- (void)setEndButton:(id)a0;
- (id)endButton;
- (void)setShowPageNotice:(BOOL)a0;
- (BOOL)showPageNotice;
- (void)setShowPageDescribe:(BOOL)a0;
- (BOOL)showPageDescribe;
- (void)setPageDescribe:(id)a0;
- (id)pageDescribe;
- (void)setJoininButton:(id)a0;
- (id)joininButton;
- (void)setJoininTimes:(id)a0;
- (id)joininTimes;
- (void)setDescribePrefix:(id)a0;
- (id)describePrefix;
- (void)setFeedPrefix:(id)a0;
- (id)feedPrefix;
- (id)archivedWCTValue;

@end
