@class NSString, NSArray;

@interface V2TXLiveTranscodingConfig : NSObject

@property (nonatomic) unsigned long long videoWidth;
@property (nonatomic) unsigned long long videoHeight;
@property (nonatomic) unsigned long long videoBitrate;
@property (nonatomic) unsigned long long videoFramerate;
@property (nonatomic) unsigned long long videoGOP;
@property (nonatomic) unsigned long long backgroundColor;
@property (copy, nonatomic) NSString *backgroundImage;
@property (nonatomic) unsigned long long audioSampleRate;
@property (nonatomic) unsigned long long audioBitrate;
@property (nonatomic) unsigned long long audioChannels;
@property (copy, nonatomic) NSArray *mixStreams;
@property (copy, nonatomic) NSString *outputStreamId;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
