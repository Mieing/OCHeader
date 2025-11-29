@class NSString;

@interface WSViewStayTimeReporter : WSReportBaseItem

@property (nonatomic) double beginTime;
@property (nonatomic) double stayDuration;
@property (nonatomic) unsigned int searchScene;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long enterType;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *connectid;

- (id)initWithImageSearchEntity:(id)a0;
- (id)initWithFingertipReportModel:(id)a0;
- (id)initWithTagInfo:(id)a0 query:(id)a1;
- (id)initWithSearchScene:(unsigned int)a0;
- (id)init;
- (void)commonInit;
- (void)beginTiming;
- (void)endTiming;
- (id)reportContent;
- (unsigned int)reportKvId;
- (void)doReport;
- (void).cxx_destruct;

@end
