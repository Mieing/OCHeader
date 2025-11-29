@class PreEnterShowWCOpenServiceConfig;

@interface PreEnterShowWCOpenServiceStep : PreEnterBaseStep

@property (retain, nonatomic) PreEnterShowWCOpenServiceConfig *configObj;
@property (readonly, nonatomic) BOOL isValid;

- (id)initWithMsg:(id)a0;
- (id)configWithContent:(id)a0;
- (void)startStep;
- (void).cxx_destruct;

@end
