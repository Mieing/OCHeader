@class NSTimer, NSDictionary, NSString;
@protocol IESLiveRoomService;

@interface IESLiveTimorLiveStreamStatusStore : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) NSTimer *delayHideTimer;
@property (copy, nonatomic) NSDictionary *timorLiveSei;
@property (retain, nonatomic) NSString *toastString;

- (void)startXLiveObserveListenStreamSei;
- (void)receiveTimorLiveSei:(id)a0;
- (double)remindToastMaxDuration;
- (void)hideToastAutomatically;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;

@end
