@class NSString;

@interface MMFinderLivePromoteDisplayRecordInfo : NSObject

@property (nonatomic) double beginDisplayTime;
@property (nonatomic) double endDisplayTime;
@property (nonatomic) double enableDisplayDuration;
@property (nonatomic) double sumCostDuration;
@property (nonatomic) BOOL isBeginCountDown;
@property (nonatomic) BOOL isCancelCountDown;
@property (nonatomic) BOOL supportDisplayCountDown;
@property (retain, nonatomic) NSString *promoteId;
@property (copy, nonatomic) id /* block */ timeoutCallback;

- (BOOL)udpateEnableDisplayDuraion:(unsigned int)a0;
- (void)beginDisplay;
- (void)endDisplay;
- (void)cancelCountDown;
- (void)destroy;
- (BOOL)needCountDown;
- (void)startCountDown;
- (void)stopCountDown;
- (void)modifyCountDown;
- (void)handleCountDownEnd;
- (void)updateBeginDisplayTime;
- (void)updateEndDisplayTime;
- (void).cxx_destruct;

@end
