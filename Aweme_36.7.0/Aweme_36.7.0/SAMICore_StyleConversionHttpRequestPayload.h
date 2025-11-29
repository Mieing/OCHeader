@class NSString, SAMICore_AudioConfig;

@interface SAMICore_StyleConversionHttpRequestPayload : NSObject

@property (retain, nonatomic) NSString *urlType;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *speaker;
@property (nonatomic) int responseType;
@property (nonatomic) BOOL useVideoStatus;
@property (nonatomic) int videoStatus;
@property (retain, nonatomic) SAMICore_AudioConfig *outAudioConfig;

- (void)dealloc;

@end
