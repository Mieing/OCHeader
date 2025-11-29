@class NSString;

@interface IESLiveInteractRemoteVideoStats : NSObject

@property (nonatomic) unsigned long long delay;
@property (retain, nonatomic) NSString *strUID;
@property (nonatomic) double receivedKBitrate;

- (void).cxx_destruct;

@end
