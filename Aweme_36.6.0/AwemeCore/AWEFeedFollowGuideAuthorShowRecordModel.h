@class NSString, NSDate;

@interface AWEFeedFollowGuideAuthorShowRecordModel : MTLModel

@property (copy, nonatomic) NSString *authorID;
@property (nonatomic) BOOL canShow;
@property (copy, nonatomic) NSString *latestUpdateSessionKey;
@property (retain, nonatomic) NSDate *lastShowTimeStamp;
@property (copy, nonatomic) NSString *lastShowSessionKey;
@property (nonatomic) long long showCount;
@property (nonatomic) BOOL isUpdating;

- (void)updateCanShowStatusWithSessionKey:(id)a0 completion:(id /* block */)a1;
- (BOOL)dataTrustworthyWithSessionKey:(id)a0;
- (BOOL)isTimeStampOutdated;
- (void)countShownForAuthorWithSessionKey:(id)a0;
- (BOOL)satisfyFrequencyControl;
- (void).cxx_destruct;
- (void)clearData;
- (id)initWithAuthor:(id)a0;

@end
