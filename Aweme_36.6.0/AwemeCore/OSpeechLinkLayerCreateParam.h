@protocol OSpeechLinkLayerCallback;

@interface OSpeechLinkLayerCreateParam : NSObject

@property (nonatomic) long long transportType;
@property (retain, nonatomic) id<OSpeechLinkLayerCallback> userCallback;

- (void).cxx_destruct;

@end
