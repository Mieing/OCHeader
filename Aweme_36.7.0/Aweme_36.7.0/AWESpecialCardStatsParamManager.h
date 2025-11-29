@class NSString, NSArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface AWESpecialCardStatsParamManager : NSObject <AWESpecialCardStatsParamManagerProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *videoInfoSemaphore;
@property (nonatomic) BOOL videoInfoFlag;
@property (nonatomic) BOOL preIsFeedCardTemplate;
@property (copy, nonatomic) NSString *preFeedCardBusinessID;
@property (copy, nonatomic) NSString *preFeedCardBusinessExtra;
@property (copy, nonatomic) NSString *preMainCardType;
@property (copy, nonatomic) NSString *preMainContainerType;
@property (copy, nonatomic) NSArray *preFeedCardSlideVideoInfo;
@property (copy, nonatomic) NSString *preFeedCardTemplateEnterFrom;
@property (nonatomic) long long tapTotalEnterStayTime;
@property (nonatomic) long long tapClickLastShowTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)setFlagForVideoInfo:(BOOL)a0;
- (void)configPreVideoInfo:(id)a0;
- (void).cxx_destruct;

@end
