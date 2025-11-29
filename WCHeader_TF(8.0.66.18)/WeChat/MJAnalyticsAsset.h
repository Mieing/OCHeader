@class NSString, NSMutableArray;

@interface MJAnalyticsAsset : WXPBGeneratedMessage

@property (nonatomic) int mediaType;
@property (nonatomic) unsigned long long durationMs;
@property (retain, nonatomic) NSString *aspectRatio;
@property (retain, nonatomic) NSString *aiTags;
@property (retain, nonatomic) NSString *originId;
@property (nonatomic) BOOL isOverThreshold;
@property (retain, nonatomic) NSMutableArray *videoClassAudioLabels;
@property (retain, nonatomic) NSMutableArray *imageClassLabels;
@property (retain, nonatomic) NSMutableArray *imageClassExceeds;
@property (retain, nonatomic) NSMutableArray *videoClassVisualLabels;
@property (retain, nonatomic) NSMutableArray *videoClassVisualExceeds;
@property (retain, nonatomic) NSString *assetIdentifier;
@property (retain, nonatomic) NSString *assetFilePath;

+ (void)initialize;

@end
