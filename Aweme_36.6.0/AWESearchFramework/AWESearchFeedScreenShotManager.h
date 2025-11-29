@class AWESearchTagResponseModel, NSString, AWEAwemeModel;
@protocol AWEHttpTask;

@interface AWESearchFeedScreenShotManager : NSObject <AWESearchFeedScreenShotProtocol>

@property (weak, nonatomic) id<AWEHttpTask> task;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWESearchTagResponseModel *responseModel;
@property (nonatomic) double playTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)fetchSearchScreenShotInfoWithAwemeModel:(id)a0 extraInfo:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
