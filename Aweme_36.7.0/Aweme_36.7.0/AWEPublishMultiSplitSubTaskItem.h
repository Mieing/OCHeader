@class ACCCameraSubscription, NSString, UIImage, NSError, AWEVideoPublishViewModel, AWECreateAwemeResponse;

@interface AWEPublishMultiSplitSubTaskItem : NSObject <AWEPublishMultiSplitSubTaskProtocol>

@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (copy, nonatomic) NSString *coverPath;
@property (copy, nonatomic) NSString *coverCacheKey;
@property (nonatomic) double progress;
@property (nonatomic) unsigned long long taskStatus;
@property (retain, nonatomic) NSError *createAwemeError;
@property (readonly, nonatomic) UIImage *coverImage;
@property (weak, nonatomic) AWEVideoPublishViewModel *workSpace;
@property (copy, nonatomic) NSString *projectUUID;
@property (copy, nonatomic) NSString *subTaskUUID;
@property (nonatomic) long long taskIndex;
@property (retain, nonatomic) AWECreateAwemeResponse *createAwemeResponse;
@property (nonatomic) BOOL handleAwemeSucceed;
@property (nonatomic) BOOL reviewSucceed;
@property (nonatomic) BOOL saveAlbumSucceed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweme;
- (void)addPropertyChangedSubscriber:(id)a0;
- (void)tryUpdateCoverWithFlow:(id)a0;
- (void).cxx_destruct;
- (void)sendNotify:(unsigned long long)a0;

@end
