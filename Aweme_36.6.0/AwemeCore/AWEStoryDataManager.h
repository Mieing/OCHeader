@class NSString, AWEAwemeModel;

@interface AWEStoryDataManager : NSObject <AWEPublishTaskMessage, AWEStoryDataManagerProtocol>

@property (retain, nonatomic) AWEAwemeModel *innerOfficialModel;
@property (retain, nonatomic) AWEAwemeModel *innerNewEducationOfficialModel;
@property (nonatomic) BOOL isHostStatus;
@property (nonatomic) BOOL isNewEducationGuideStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)calcDaysFromBegin:(id)a0 end:(id)a1;
+ (id)sharedInstance;

- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)loadPreviousStoryWithAwemeModel:(id)a0 completion:(id /* block */)a1;
- (void)loadMoreStoryWithAwemeModel:(id)a0 completion:(id /* block */)a1;
- (void)fetchStoryWithAwemeModel:(id)a0 completion:(id /* block */)a1;
- (void)p_postRequest:(id)a0 completion:(id /* block */)a1;
- (id)p_commonParam:(id)a0 story:(id)a1;
- (void)storyLoadRequestMonitorWithAwemeModel:(id)a0 loadType:(long long)a1;
- (void)storyLoadResponseMonitorWithAwemeModel:(id)a0 loadType:(long long)a1 storyGroup:(id)a2 error:(id)a3;
- (void)updateStoryGroup:(id)a0 awemeModel:(id)a1;
- (id)p_storyLoadStatusDict:(id)a0 error:(id)a1 loadType:(long long)a2;
- (void)fetchOfficialAwemeIsHostStatus:(BOOL)a0 Completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
