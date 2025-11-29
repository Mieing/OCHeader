@class LCAudioDiagnosisInfo;

@interface LCAudioDiagnosisResult : NSObject

@property (nonatomic) long long diagnosisReason;
@property (retain, nonatomic) LCAudioDiagnosisInfo *diagnosisInfo;
@property (nonatomic) long long diagnosisLevel;

- (void).cxx_destruct;
- (id)description;

@end
