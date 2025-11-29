@interface PreEnterElderModeStep : PreEnterBaseStep

@property (nonatomic) unsigned long long flag;
@property (nonatomic) unsigned long long hearingAidMode;

- (id)initWithFlag:(unsigned long long)a0;
- (id)initWithFlag:(unsigned long long)a0 withHearingAidMode:(unsigned long long)a1;
- (void)startStep;
- (void)startStepAlert:(BOOL)a0 andHearingAid:(BOOL)a1;

@end
