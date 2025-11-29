@class VEAudioResampler, NSString, ACCAudioExport, AWEVideoPublishViewModel, NSArray, NSError, NSDictionary, AWEResourceUploadParametersResponseModel, NSMutableArray, NSObject, VEEditorSession;
@protocol ACCEditVideoDataProtocol;

@interface AWEAudioExport : NSObject <ACCAudioFrameExportProtocol>

@property (nonatomic) double export;
@property (nonatomic) double createTime;
@property (retain, nonatomic) VEAudioResampler *audioResampler;
@property (retain, nonatomic) ACCAudioExport *audioExport;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParameters;
@property (retain, nonatomic) NSString *awemeId;
@property (retain, nonatomic) NSString *materialId;
@property (retain, nonatomic) NSMutableArray *urls;
@property (retain, nonatomic) NSObject<ACCEditVideoDataProtocol> *videoData;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) NSArray *videoDatas;
@property (retain, nonatomic) NSArray *publishModels;
@property (retain, nonatomic) NSArray *vids;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSDictionary *response;
@property (nonatomic) BOOL success;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL isOriSound;
@property (copy, nonatomic) NSArray *handles;
@property (retain, nonatomic) VEEditorSession *session;
@property (nonatomic) BOOL executing;
@property (nonatomic) long long editType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)needUploadOriginAudio:(id)a0;
+ (id)generateHandlers;
+ (void)extractAudioAndUploadFromPublishModels:(id)a0 vids:(id)a1 awemeItemId:(id)a2 uploadParameters:(id)a3 completion:(id /* block */)a4;
+ (BOOL)checkResources:(id)a0;
+ (void)extractAudioAndUploadFromVideoData:(id)a0 publishModel:(id)a1 isOriSound:(BOOL)a2 awemeItemId:(id)a3 uploadParameters:(id)a4 completion:(id /* block */)a5;
+ (void)startIfNeeded;

- (id)commontParams;
- (void)startWithIndex:(long long)a0;
- (void)trackErrorEvent:(id)a0;
- (void)p_hasExportAudioWithURLs:(id)a0 vids:(id)a1;
- (double)exportCost;
- (void).cxx_destruct;
- (id)init;
- (void)start;
- (void)didFinish;

@end
