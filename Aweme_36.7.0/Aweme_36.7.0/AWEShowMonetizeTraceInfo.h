@class NSTimer, NSString, AWEPaymentEventResponseModel;

@interface AWEShowMonetizeTraceInfo : NSObject

@property (retain, nonatomic) NSTimer *timeOutTimer;
@property (copy, nonatomic) NSString *awemeID;
@property (nonatomic) unsigned long long step;
@property (nonatomic) double startTime;
@property (nonatomic) double requestStartTimeStamp;
@property (nonatomic) double requestEndTimeStamp;
@property (nonatomic) double cellWillShowTimeStamp;
@property (nonatomic) double playTimeStamp;
@property (retain, nonatomic) AWEPaymentEventResponseModel *eventResponse;

- (void).cxx_destruct;
- (void)dealloc;

@end
