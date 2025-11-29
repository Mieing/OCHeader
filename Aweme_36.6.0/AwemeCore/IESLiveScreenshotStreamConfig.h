@class NSString, NSDictionary, NSArray;

@interface IESLiveScreenshotStreamConfig : NSObject <IESLivePushStreamEntryConfig>

@property (nonatomic) double videoSolution;
@property (nonatomic) BOOL rotateOrientation;
@property (nonatomic) unsigned long long videoFps;
@property (nonatomic) unsigned long long defaultBitrate;
@property (nonatomic) unsigned long long maxBitrate;
@property (nonatomic) unsigned long long minBitrate;
@property (copy, nonatomic) NSString *pushRtmpURL;
@property (copy, nonatomic) NSString *authorizationString;
@property (copy, nonatomic) NSDictionary *sdkParams;
@property (copy, nonatomic) NSArray *pushUrls;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
