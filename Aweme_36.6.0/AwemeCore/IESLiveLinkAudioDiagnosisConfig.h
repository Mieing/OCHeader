@class NSString, NSDictionary;

@interface IESLiveLinkAudioDiagnosisConfig : NSObject

@property (nonatomic) BOOL enableDiagnosis;
@property (copy, nonatomic) NSString *audioDiagnosisModelPath;
@property (copy, nonatomic) NSDictionary *audioDiagnosisParams;
@property (copy, nonatomic) NSDictionary *audioDiagnosisSwitch;
@property (copy, nonatomic) NSDictionary *audioDiagnosisThresholds;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
