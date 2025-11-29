@interface CdnStreamingProfile : WXPBGeneratedMessage

@property (nonatomic) unsigned int firstRequestCost;
@property (nonatomic) unsigned long long firstRequestSize;
@property (nonatomic) unsigned long long firstRequestDownloadSize;
@property (nonatomic) BOOL isFirstRequestCompleted;
@property (nonatomic) unsigned int moovRequestTimes;
@property (nonatomic) unsigned int moovCost;
@property (nonatomic) unsigned int moovSize;
@property (nonatomic) BOOL isMoovCompleted;
@property (nonatomic) unsigned int moovFailReason;
@property (nonatomic) unsigned long long avgRequestSize;
@property (nonatomic) unsigned int avgRequestCost;
@property (nonatomic) unsigned int requestTotalCount;
@property (nonatomic) unsigned int requestCompletedCount;
@property (nonatomic) unsigned int requestTimeoutCount;

+ (void)initialize;

@end
