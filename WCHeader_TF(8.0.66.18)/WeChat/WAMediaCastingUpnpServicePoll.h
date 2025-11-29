@class NSTimer;
@protocol WAMediaCastingUpnpServicePollDelegate;

@interface WAMediaCastingUpnpServicePoll : NSObject

@property (retain, nonatomic) NSTimer *timer;
@property (weak, nonatomic) id<WAMediaCastingUpnpServicePollDelegate> delegate;
@property (readonly, nonatomic) BOOL isActive;

- (void)dealloc;
- (void)startPollWithTimeInterval:(double)a0;
- (void)stopPoll;
- (void)timeTick;
- (void)callDelegate;
- (void).cxx_destruct;

@end
