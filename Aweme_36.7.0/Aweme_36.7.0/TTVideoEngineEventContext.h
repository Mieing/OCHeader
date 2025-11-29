@class NSString, NSMutableArray, NSMutableDictionary;

@interface TTVideoEngineEventContext : NSObject

@property (nonatomic) long long mLocalTimeMs;
@property (nonatomic) BOOL mIsabr;
@property (nonatomic) long long mSampleInterVal;
@property (nonatomic) long long mVideoSampleCount;
@property (retain, nonatomic) NSMutableArray *mVideoSampleInterval;
@property (retain, nonatomic) NSMutableArray *mVideoSpeedArray;
@property (retain, nonatomic) NSMutableArray *mVideoSpeedLoadTypeArray;
@property (retain, nonatomic) NSMutableArray *mVideoSpeedPredictSpeedArray;
@property (retain, nonatomic) NSMutableArray *mVideoPredictSpeedLoadTypeArray;
@property (retain, nonatomic) NSMutableArray *mVideoPlayBitrateArray;
@property (retain, nonatomic) NSMutableArray *mVideoDownloadBitrateArray;
@property (retain, nonatomic) NSMutableArray *mVideoDownloadSizeArray;
@property (retain, nonatomic) NSMutableArray *mVideoDownloadCostTimeArray;
@property (retain, nonatomic) NSMutableArray *mVideoTcpInfoRttArray;
@property (retain, nonatomic) NSMutableArray *mVideoTcpInfoLastRecvDateArray;
@property (nonatomic) long long mAudioSampleCount;
@property (retain, nonatomic) NSMutableArray *mAudioSampleInterval;
@property (retain, nonatomic) NSMutableArray *mAudioSpeedArray;
@property (retain, nonatomic) NSMutableArray *mAudioSpeedLoadTypeArray;
@property (retain, nonatomic) NSMutableArray *mAudioSpeedPredictSpeedArray;
@property (retain, nonatomic) NSMutableArray *mAudioPredictSpeedLoadTypeArray;
@property (retain, nonatomic) NSMutableArray *mAudioPlayBitrateArray;
@property (retain, nonatomic) NSMutableArray *mAudioDownloadBitrateArray;
@property (retain, nonatomic) NSMutableArray *mAudioDownloadSizeArray;
@property (retain, nonatomic) NSMutableArray *mAudioDownloadCostTimeArray;
@property (retain, nonatomic) NSMutableArray *mAudioTcpInfoRttArray;
@property (retain, nonatomic) NSMutableArray *mAudioTcpInfoLastRecvDateArray;
@property (retain, nonatomic) NSMutableArray *mBufferLenArray;
@property (retain, nonatomic) NSMutableArray *mPlaySpeedArray;
@property (retain, nonatomic) NSMutableArray *mPlayPosArray;
@property (nonatomic) long long mIndex;
@property (retain, nonatomic) NSString *mPlaySessionId;
@property (retain, nonatomic) NSString *mVideoID;
@property (retain, nonatomic) NSString *mUrl;
@property (retain, nonatomic) NSMutableArray *mVideoBitrateArray;
@property (retain, nonatomic) NSMutableArray *mAudioBitrateArray;
@property (retain, nonatomic) NSMutableDictionary *mBitrateCompressTable;
@property (retain, nonatomic) NSString *mVtype;
@property (nonatomic) long long mDimensionsOut;
@property (nonatomic) long long mDimensionsInput;

- (void).cxx_destruct;
- (id)init;

@end
