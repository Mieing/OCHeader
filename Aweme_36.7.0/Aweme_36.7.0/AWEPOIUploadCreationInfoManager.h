@class NSArray, NSString, AWEPOIUploadCreationConfigModel, AWEVideoPublishViewModel, ACCExtractAbilityManager, AWEBinding;

@interface AWEPOIUploadCreationInfoManager : NSObject

@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) AWEPOIUploadCreationConfigModel *configModel;
@property (retain, nonatomic) ACCExtractAbilityManager *extractManager;
@property (copy, nonatomic) NSArray *materialModels;
@property (copy, nonatomic) id /* block */ materialChangeHandler;
@property (retain, nonatomic) AWEBinding *materialObserveBinding;
@property (nonatomic) BOOL isExtractingFrame;
@property (copy, nonatomic) NSString *videoFrameURI;

+ (id)createManagerWithPublishViewModel:(id)a0;
+ (id)currentManagerWithCreationId:(id)a0;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)extractUploadFrameIfNeeded;
- (void)trackExtractFrameError:(long long)a0 message:(id)a1;
- (void)clearExtractManagerCache;
- (void)trackExtractFrameTriggerWithCode:(long long)a0;
- (void)p_extractUploadFrame:(double)a0;
- (void)trackExtractFrameSuccessWithServerDuration:(double)a0 extractDuration:(double)a1 expectedFrameCount:(long long)a2 actualFrameCount:(long long)a3;
- (void)p_sendVideoFrameURIToServer;
- (void)p_fetchMaterialsWithCompletion:(id /* block */)a0;
- (void)trackExtractFrameSendServerSuccess:(BOOL)a0 duration:(double)a1;
- (id)creationTitle;
- (id)creationAutoASR;
- (id)creationCustomVideoURI;
- (id)creationDefaultVideoURI;
- (BOOL)creationIsImageAlbumStyle;
- (void).cxx_destruct;
- (void)dealloc;

@end
