@class AWESearchTagResponseModel, NSString, AWEAwemeModel;
@protocol AWEHttpTask;

@interface AWESearchPauseTagsManager : NSObject <AWEPauseTagProtocol>

@property (weak, nonatomic) id<AWEHttpTask> task;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWESearchTagResponseModel *responseModel;
@property (nonatomic) double playTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)fetchSearchPauseTagsWithAwemeModel:(id)a0 tagInfo:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
