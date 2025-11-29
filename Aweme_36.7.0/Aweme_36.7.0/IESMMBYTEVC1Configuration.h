@class NSArray;

@interface IESMMBYTEVC1Configuration : IESMMCodecConfiguration

@property (nonatomic) unsigned char configurationVersion;
@property (nonatomic) unsigned char generalProfileSpace;
@property (nonatomic) unsigned char generalTierFlag;
@property (nonatomic) unsigned char generalProfileIDC;
@property (nonatomic) unsigned int generalProfileCompatibilityFlags;
@property (nonatomic) unsigned long long generalConstraintInicatorFlags;
@property (nonatomic) unsigned char generalLevelIDC;
@property (nonatomic) unsigned short minSpatialSegmentationIDC;
@property (nonatomic) unsigned char parallelismType;
@property (nonatomic) unsigned char chromaFormat;
@property (nonatomic) unsigned char bitDepthLumaMinus8;
@property (nonatomic) unsigned char bitDepthChromaMinus8;
@property (nonatomic) unsigned short avgFrameRate;
@property (nonatomic) unsigned char constantFrameRate;
@property (nonatomic) unsigned char numTemporalLayers;
@property (nonatomic) unsigned char temporalIdNested;
@property (nonatomic) unsigned char lengthSizeMinusOne;
@property (nonatomic) unsigned char numOfSequenceParameterSets;
@property (retain, nonatomic) NSArray *sequenceParameterSetsArray;
@property (nonatomic) unsigned char numOfPictureParameterSets;
@property (retain, nonatomic) NSArray *pictureParameterSetsArray;
@property (nonatomic) unsigned char numOfVideoParameterSets;
@property (retain, nonatomic) NSArray *videoParameterSetsArray;

- (id)initWithCFDataRef:(struct __CFData { } *)a0;
- (id)getCodecConfigKey;
- (void).cxx_destruct;
- (id)init;

@end
