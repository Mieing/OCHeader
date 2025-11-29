@class NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface IESIMClientTimestampAdjustManager : NSObject <TIMXStatisticProtocol, IESIMClientTimestampAdjustManagerProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem;
@property (nonatomic) long long staticTimestampDeltaCount;
@property (nonatomic) long long totalStaticTimestampDelta;
@property (nonatomic) long long avgStaticTimestampDelta;
@property (nonatomic) unsigned long long innertNtpStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (long long)currentClientTimestampDelta;
- (unsigned long long)ntpStauts;
- (long long)calcuelateCurrentDeltaWithTimestamp:(id)a0;
- (void)didReceiveTimestamp:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
