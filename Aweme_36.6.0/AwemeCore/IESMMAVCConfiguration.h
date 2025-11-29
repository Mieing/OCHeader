@class NSArray;

@interface IESMMAVCConfiguration : IESMMCodecConfiguration

@property (nonatomic) unsigned char configurationVersion;
@property (nonatomic) unsigned char AVCProfileIndication;
@property (nonatomic) unsigned char profile_compatibility;
@property (nonatomic) unsigned char AVCLevelIndication;
@property (nonatomic) unsigned char lengthSizeMinusOne;
@property (nonatomic) unsigned char numOfSequenceParameterSets;
@property (retain, nonatomic) NSArray *sequenceParameterSetsArray;
@property (nonatomic) unsigned char numOfPictureParameterSets;
@property (retain, nonatomic) NSArray *pictureParameterSetsArray;

- (id)initWithCFDataRef:(struct __CFData { } *)a0;
- (id)getCodecConfigKey;
- (void).cxx_destruct;
- (id)init;

@end
