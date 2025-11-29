@class NSString, NSData;

@interface BDRemoteSinkVideoData : NSObject

@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) NSData *extendedData;
@property (nonatomic) long long rotation;
@property (nonatomic) struct opaqueCMSampleBuffer { } *sampleBuffer;

- (void).cxx_destruct;

@end
