@protocol WCOutGetCallInfoDelegate;

@interface WCOutGetCallInfoCgi : NSObject <PBMessageObserverDelegate>

@property (nonatomic) unsigned int eventID;
@property (weak, nonatomic) id<WCOutGetCallInfoDelegate> delegate;

+ (id)instanceWithDelegate:(id)a0;

- (void)doCgi;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
