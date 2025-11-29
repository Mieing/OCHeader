@interface WCOutFeedbackCgi : NSObject <PBMessageObserverDelegate>

@property (nonatomic) unsigned int eventID;

- (void)dealloc;
- (void)sendrequest:(int)a0 star:(int)a1 FbCount:(int)a2 Fblist:(id)a3;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;

@end
