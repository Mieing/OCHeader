@class NSArray;

@interface WCFinderFeedbackReasonFetchResult : NSObject

@property (nonatomic) BOOL fetching;
@property (nonatomic) BOOL fetchSuccess;
@property (retain, nonatomic) NSArray *feedbackReasons;

+ (id)resultForSuccessWith:(id)a0;
+ (id)resultForFail;
+ (id)resultForFetching;

- (BOOL)needFetch;
- (BOOL)readyToShow;
- (void).cxx_destruct;

@end
