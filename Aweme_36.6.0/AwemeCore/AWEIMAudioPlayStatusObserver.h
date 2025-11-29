@class NSString;

@interface AWEIMAudioPlayStatusObserver : NSObject

@property (nonatomic) unsigned long long status;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double currentTime;
@property (copy, nonatomic) NSString *originAudioMsgObserverID;
@property (copy, nonatomic) NSString *quotedAudioMsgObserverID;

- (void).cxx_destruct;

@end
