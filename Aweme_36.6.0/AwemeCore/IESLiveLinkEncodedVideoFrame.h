@class NSData;

@interface IESLiveLinkEncodedVideoFrame : IESLiveLinkFrame

@property long long bufferType;
@property int width;
@property int height;
@property long long rotation;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) long long codecType;
@property (nonatomic) long long pictureType;
@property (nonatomic) long long timestampUs;
@property (nonatomic) long long timestampDtsUs;

- (void).cxx_destruct;

@end
