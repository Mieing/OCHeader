@class NSData, NSObject;

@interface OSpeechLinkLayerUplinkCallbackParam : NSObject

@property (nonatomic) long long speechEvent;
@property (retain, nonatomic) NSData *eventPbData;
@property (retain, nonatomic) NSData *audioData;
@property (retain, nonatomic) NSData *audioExtraPbData;
@property (weak, nonatomic) NSObject *userContext;

- (void).cxx_destruct;

@end
