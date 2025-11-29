@class PreEnterShowLimitedModeEntryConfig;

@interface PreEnterShowLimitedModeEntryStep : PreEnterBaseStep

@property (retain, nonatomic) PreEnterShowLimitedModeEntryConfig *configObj;
@property (readonly, nonatomic) BOOL isValid;

- (id)initWithMsg:(id)a0;
- (id)configWithContent:(id)a0;
- (void)startStep;
- (void).cxx_destruct;

@end
