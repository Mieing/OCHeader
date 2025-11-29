@class NSData, NSSet, NSString;

@interface FaceRecogFlashParamProcessor : NSObject

@property (retain, nonatomic) NSData *selectDataFromConfig;
@property (retain, nonatomic) NSSet *actionTipsSet;
@property (nonatomic) long long workMode;
@property (retain, nonatomic) NSString *bioId;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *bizName;
@property (retain, nonatomic) NSString *personId;
@property (nonatomic) long long depthFrameCount;

- (id)initWithWorkMode:(long long)a0;
- (unsigned int)getCheckAliveType;
- (int)getBioCheckLiveConfigFlag;
- (long long)getUploadLiveType;
- (long long)getReportLivessType;
- (id)getPayConfigWithActionData:(id)a0 videoBitRate:(double)a1;
- (id)getEncodedVideoDataFromYtResult:(id)a0;
- (id)getLiveSelectDataFromYTConfig:(id)a0;
- (id)getYtConfigFromResponse:(id)a0 liveSelectData:(id)a1;
- (id)getYtConfigFromResponseAssemble:(id)a0 liveSelectData:(id)a1 setConfig:(id)a2;
- (id)generateBioBufferWithYtData:(id)a0 voiceData:(id)a1;
- (id)generateLiveBodyWithYTContent:(id)a0 voiceData:(id)a1;
- (id)generateLiveHeaderWithKey:(id)a0 bodyData:(id)a1;
- (id)preprocessYtData:(id)a0 voiceData:(id)a1;
- (id)getBestImageFromYtData:(id)a0 bioId:(id)a1;
- (BOOL)isActionTips:(id)a0;
- (void).cxx_destruct;

@end
