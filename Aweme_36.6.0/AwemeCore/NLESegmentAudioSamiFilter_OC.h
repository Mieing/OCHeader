@class NSString;

@interface NLESegmentAudioSamiFilter_OC : NLESegmentFilter_OC

@property (nonatomic) unsigned long long samiType;
@property (copy, nonatomic) NSString *samiParam;
@property (copy, nonatomic) NSString *samiDenoiseLevel;
@property (copy, nonatomic) NSString *samiCreateConfigInfo;
@property (copy, nonatomic) NSString *samiSnrThreshold;
@property (copy, nonatomic) NSString *samiSnrFilePath;
@property (nonatomic) BOOL enableSNR;

- (void).cxx_destruct;
- (id)init;

@end
