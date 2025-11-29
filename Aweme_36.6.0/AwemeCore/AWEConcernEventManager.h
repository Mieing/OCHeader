@class NSTimer, NSString;

@interface AWEConcernEventManager : NSObject

@property (nonatomic) BOOL hasTrack;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL isConcern;
@property (copy, nonatomic) NSString *authorId;

- (void)didConsumptionSuccess;
- (void)disCommentSuccess;
- (void)didPraseSuccess:(id)a0;
- (void).cxx_destruct;
- (void)timerFired;
- (void)addObserver;
- (void)dealloc;

@end
