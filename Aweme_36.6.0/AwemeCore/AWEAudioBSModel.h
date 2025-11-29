@class NSArray, NSString, NSNumber;

@interface AWEAudioBSModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *urlList;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
