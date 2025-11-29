@class IESLiveAudioDiagnosisInfo;

@interface IESLiveAudioDiagnosisResult : NSObject

@property (nonatomic) long long diagnosisReason;
@property (retain, nonatomic) IESLiveAudioDiagnosisInfo *diagnosisInfo;
@property (nonatomic) long long diagnosisLevel;

- (void).cxx_destruct;

@end
