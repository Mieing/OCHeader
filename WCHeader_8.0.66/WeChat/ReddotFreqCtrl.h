@interface ReddotFreqCtrl : WXPBGeneratedMessage

@property (nonatomic) unsigned int ctrlType;
@property (nonatomic) unsigned int freqCtrlInterval;

+ (void)initialize;

- (void)setFreqCtrlInterval:(unsigned int)a0;
- (unsigned int)freqCtrlInterval;
- (void)setCtrlType:(unsigned int)a0;
- (unsigned int)ctrlType;

@end
