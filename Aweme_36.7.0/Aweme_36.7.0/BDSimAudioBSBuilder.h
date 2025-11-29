@class NSString, NSNumber;

@interface BDSimAudioBSBuilder : NSObject

@property (copy, nonatomic) NSString *mainUrl;
@property (copy, nonatomic) NSString *backupUrl;
@property (copy, nonatomic) NSString *fallbackUrl;
@property (copy, nonatomic) NSString *encodedType;
@property (copy, nonatomic) NSString *mediaType;
@property (copy, nonatomic) NSString *logoType;
@property (copy, nonatomic) NSString *quality;
@property (copy, nonatomic) NSString *qualityDesc;
@property (copy, nonatomic) NSString *format;
@property (copy, nonatomic) NSString *codecType;
@property (copy, nonatomic) NSString *fileId;
@property (copy, nonatomic) NSString *fileHash;
@property (copy, nonatomic) NSString *subInfo;
@property (retain, nonatomic) NSNumber *audioQuality;
@property (retain, nonatomic) NSNumber *fps;
@property (retain, nonatomic) NSNumber *bitrate;
@property (retain, nonatomic) NSNumber *size;

- (void).cxx_destruct;
- (id)build;

@end
