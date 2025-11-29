@class NSString;

@interface FinderPostNewLifeInfo_PhotoMetaData : WXPBGeneratedMessage

@property (nonatomic) double longitude;
@property (nonatomic) double latitude;
@property (retain, nonatomic) NSString *datetime;
@property (nonatomic) double brightness;
@property (nonatomic) double aperture;
@property (nonatomic) double apertureMax;
@property (nonatomic) double exposureBias;
@property (nonatomic) double subjectDistance;
@property (nonatomic) double shutterSpeed;
@property (nonatomic) double focalLength;
@property (nonatomic) unsigned int meteringMode;
@property (nonatomic) unsigned int whiteBalance;
@property (retain, nonatomic) NSString *lensModel;
@property (nonatomic) unsigned int flash;
@property (nonatomic) unsigned int dpiWidth;
@property (nonatomic) unsigned int dpiHeight;
@property (nonatomic) unsigned int pixelWidth;
@property (nonatomic) unsigned int pixelHeight;

+ (void)initialize;

@end
