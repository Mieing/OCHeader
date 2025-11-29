@class NSMutableDictionary;

@interface AWETransformerEventCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *showTrackHistory;
@property (nonatomic) BOOL isAppear;

+ (id)defaultCenter;

- (void)handleEvents:(id)a0 element:(id)a1;
- (id)__mergeQueries:(id)a0 toWebViewURLString:(id)a1;
- (id)__mergeQueries:(id)a0 toURLString:(id)a1;
- (BOOL)hasReportShowTrackWithEventName:(id)a0 unique:(id)a1;
- (void)addToHistoryWithShowEventName:(id)a0 unique:(id)a1;
- (void)__cleanShowTrackHistory;
- (void).cxx_destruct;
- (id)init;

@end
