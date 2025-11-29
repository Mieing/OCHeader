@class NSMutableDictionary;

@interface WCFinderReportQueryParams : NSObject

@property (retain, nonatomic) NSMutableDictionary *queryDict;

- (id)init;
- (void)_setupDefaultReportQuery;
- (void)setupFeedReportWithFeedID:(id)a0 commentScene:(int)a1 adAID:(unsigned long long)a2;
- (void)setupUserReportWithUsername:(id)a0 commentScene:(int)a1 refID:(id)a2;
- (id)genQueryString;
- (void)setQueryKey:(id)a0 value:(id)a1;
- (void)addQueryDictionary:(id)a0;
- (void).cxx_destruct;

@end
