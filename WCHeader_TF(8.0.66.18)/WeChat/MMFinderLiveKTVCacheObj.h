@class NSString, MMFinderLiveKTVBox, UIView;

@interface MMFinderLiveKTVCacheObj : NSObject

@property (retain, nonatomic) NSString *cacheKey;
@property (copy, nonatomic) id /* block */ surviveTimeoutCallback;
@property (nonatomic) BOOL used;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) MMFinderLiveKTVBox *ktvBox;

- (void)startSurvive;
- (void)timeoutForSurvive;
- (void)tagUsed;
- (id)description;
- (void).cxx_destruct;

@end
