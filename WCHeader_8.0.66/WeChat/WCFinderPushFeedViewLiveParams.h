@class FinderCommByPass;

@interface WCFinderPushFeedViewLiveParams : NSObject

@property (retain, nonatomic) FinderCommByPass *feedOverridingBypass;
@property (nonatomic) BOOL disableHistoryForLives;

+ (id)paramsWithJsapiExtendedInfo:(id)a0;

- (void).cxx_destruct;

@end
