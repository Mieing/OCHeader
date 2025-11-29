@class NSString, BDCTFlowContext, BDCTEventTracker;

@interface BDCTAPIService : NSObject

@property (retain, nonatomic) BDCTFlowContext *context;
@property (retain, nonatomic) BDCTEventTracker *eventTracker;
@property (readonly, nonatomic) BOOL useSystemV2;
@property (copy, nonatomic) NSString *supportLivenessTypesString;

+ (void)metaSecReportForSDKInit;
+ (void)getGrayscaleStrategyWithEnterFrom:(id)a0 completion:(id /* block */)a1;
+ (void)getAuthDecisionWithParams:(id)a0 completion:(id /* block */)a1;

- (void)bytedInitWithCallback:(id /* block */)a0;
- (void)authSubmitWithParams:(id)a0 completion:(id /* block */)a1;
- (void)bytedLiveDetectWithParams:(id)a0 callback:(id /* block */)a1;
- (void)bytedfaceCompare:(id)a0 progressType:(unsigned long long)a1 sdkData:(id)a2 callback:(id /* block */)a3;
- (void)bytedUploadVideo:(id)a0 videoData:(id)a1 callback:(id /* block */)a2;
- (void)bytedCommonOCR:(id)a0 type:(id)a1 callback:(id /* block */)a2;
- (void)bytedOCRWithFrontImageData:(id)a0 backImageData:(id)a1 callback:(id /* block */)a2;
- (void)bytedOCRWithImageDataArray:(id)a0 imageNameArray:(id)a1 callback:(id /* block */)a2;
- (void)bytedManualCheck:(id)a0 frontImageData:(id)a1 holdImageData:(id)a2 callback:(id /* block */)a3;
- (void)preManualCheckWithParams:(id)a0 frontIDCardImageData:(id)a1 backIDCardImageData:(id)a2 callback:(id /* block */)a3;
- (void)authQueryWithParams:(id)a0 frontImageData:(id)a1 backImageData:(id)a2 completion:(id /* block */)a3;
- (void)bytedfaceHashUpload:(id)a0 faceImageHashes:(id)a1 hashDuration:(long long)a2 hashSign:(id)a3 completion:(id /* block */)a4;
- (void)bytedFaceDetectInfoUpload:(id)a0;
- (void)bytedFaceDepthDataUpload:(id)a0;
- (void)bytedfaceFailUpload:(id)a0 sdkData:(id)a1 completion:(id /* block */)a2;
- (void)bytedSaveCertVideo:(id)a0 videoFilePath:(id)a1 completion:(id /* block */)a2;
- (void)bytedUploadShootVideo:(id)a0 videoFilePath:(id)a1 completion:(id /* block */)a2;
- (id)addPostSensitiveParams:(id)a0 toUrl:(id)a1;
- (void)bytedFetch:(id)a0 url:(id)a1 params:(id)a2 callback:(id /* block */)a3;
- (void)postWithUrl:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)postWithUrl:(id)a0 params:(id)a1 binaryNames:(id)a2 binaryDatas:(id)a3 completion:(id /* block */)a4;
- (void)postWithUrl:(id)a0 params:(id)a1 binaryNames:(id)a2 binaryDatas:(id)a3 headerField:(id)a4 completion:(id /* block */)a5;
- (void)postWithUrl:(id)a0 params:(id)a1 binaryNames:(id)a2 binaryDatas:(id)a3 multiPart:(id)a4 headerField:(id)a5 completion:(id /* block */)a6;
- (void)postForResponseWithUrl:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)getWithUrl:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)requestWithUrl:(id)a0 method:(id)a1 params:(id)a2 binaryNames:(id)a3 binaryDatas:(id)a4 completion:(id /* block */)a5;
- (void)requestForResponseWithUrl:(id)a0 method:(id)a1 params:(id)a2 binaryNames:(id)a3 binaryDatas:(id)a4 completion:(id /* block */)a5;
- (void)bytedGetVideoRecordConfig:(id /* block */)a0;
- (void)bytedFaceInitWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
