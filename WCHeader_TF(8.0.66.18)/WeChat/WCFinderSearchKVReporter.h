@class WCFinderSearchMetaData;

@interface WCFinderSearchKVReporter : NSObject

@property (retain, nonatomic) WCFinderSearchMetaData *metaData;

+ (id)requestIdForFeedVM:(id)a0;
+ (void)setReqeustId:(id)a0 forFeedVM:(id)a1;
+ (void)setReqeustId:(id)a0 forFeedVMS:(id)a1;

- (void)reportSearchWithText:(id)a0 requestId:(id)a1 resultEmpty:(BOOL)a2;
- (void)reportWithClickWithQueryText:(id)a0 tid:(id)a1 position:(long long)a2 hotwordId:(id)a3 requestId:(id)a4 clickType:(BOOL)a5;
- (void).cxx_destruct;

@end
