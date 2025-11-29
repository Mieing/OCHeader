@class NSString;

@interface BDPPreloadStateModel : NSObject

@property (nonatomic) BOOL isPreloadFired;
@property (copy, nonatomic) NSString *preloadFailReason;
@property (nonatomic) BOOL isPreloadFinish;
@property (nonatomic) BOOL isPreloadUsed;

- (void).cxx_destruct;

@end
