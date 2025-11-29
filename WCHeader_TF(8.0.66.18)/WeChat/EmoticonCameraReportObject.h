@class NSString;

@interface EmoticonCameraReportObject : MMObject {
    unsigned long long m_totalTime;
    unsigned long long m_startRecordTime;
    unsigned long long m_recordTime;
    unsigned long long m_startEditTime;
    unsigned long long m_editTime;
    unsigned long long m_startComposeTime;
    unsigned long long m_composeTime;
    unsigned long long m_startUploadTime;
    unsigned long long m_uploadTime;
    NSString *m_lastExposureLensId;
    NSString *m_chooseLensId;
    NSString *m_chooseLensName;
}

@property (nonatomic) unsigned long long enterTime;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long recentPulledByCameraEmoticonLabelTime;
@property (retain, nonatomic) NSString *attachedText;
@property (retain, nonatomic) NSString *textColor;
@property (nonatomic) BOOL removeBg;
@property (nonatomic) BOOL fastPlay;
@property (nonatomic) int attachedEmoticonCount;
@property (nonatomic) BOOL isWxam;
@property (nonatomic) unsigned int dataSize;
@property (retain, nonatomic) NSString *followMd5;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *activityId;
@property (nonatomic) BOOL cameraPositionBack;
@property (retain, nonatomic) NSString *followLensId;
@property (retain, nonatomic) NSString *lensId;
@property (retain, nonatomic) NSString *lensName;
@property (nonatomic) unsigned long long lensSource;
@property (nonatomic) long long lensPosition;
@property (nonatomic) unsigned long long lensSourceType;

+ (void)reportShowEmoticonCameraEntrance;
+ (void)reportClickEmoticonCameraLabelInMessage;
+ (void)reportAction:(unsigned long long)a0 enterTime:(unsigned long long)a1 totalTime:(unsigned long long)a2 recordTime:(unsigned long long)a3 editTime:(unsigned long long)a4 composeTime:(unsigned long long)a5 uploadTime:(unsigned long long)a6 composeFailReason:(unsigned long long)a7 uploadFailReason:(unsigned long long)a8 scene:(unsigned long long)a9 lensId:(id)a10 lensPosition:(unsigned long long)a11 boardPullUpInterval:(unsigned long long)a12 lensName:(id)a13 lensSource:(unsigned long long)a14 sourceType:(unsigned long long)a15;
+ (void)reportAction:(unsigned long long)a0 enterTime:(unsigned long long)a1 totalTime:(unsigned long long)a2 recordTime:(unsigned long long)a3 editTime:(unsigned long long)a4 composeTime:(unsigned long long)a5 uplaodTime:(unsigned long long)a6 scene:(unsigned long long)a7 boardPullUpInterval:(unsigned long long)a8 lensId:(id)a9 lensName:(id)a10 lensPosition:(unsigned long long)a11 source:(unsigned long long)a12 sourceType:(unsigned long long)a13;
+ (void)reportFailureAction:(unsigned long long)a0 enterTime:(unsigned long long)a1 composeFailReason:(unsigned long long)a2 uploadFailReason:(unsigned long long)a3 scene:(unsigned long long)a4;
+ (void)reportChooseLens:(id)a0 lensName:(id)a1 lensPosition:(unsigned long long)a2 enterTime:(unsigned long long)a3 scene:(unsigned long long)a4 source:(unsigned long long)a5 sourceType:(unsigned long long)a6;

- (id)init;
- (void)reportLensExposureWithId:(id)a0 lensName:(id)a1 isFromRecommend:(BOOL)a2;
- (void)reportAction:(unsigned long long)a0;
- (void)reportComposeFailureWithReason:(unsigned long long)a0;
- (void)startUpload;
- (void)reportUploadFailureWithReason:(unsigned long long)a0;
- (void)reportChooseLens:(id)a0 lensName:(id)a1 withPosition:(unsigned long long)a2 source:(unsigned long long)a3;
- (void)reportProcessEnd;
- (void).cxx_destruct;

@end
