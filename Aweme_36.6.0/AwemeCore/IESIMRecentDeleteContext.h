@class NSDictionary, NSArray;

@interface IESIMRecentDeleteContext : AWEIMComponentContext

@property (copy, nonatomic) NSDictionary *routerParamDict;
@property (nonatomic) BOOL hasInitFetch;
@property (copy, nonatomic) NSArray *conversationDeleteInfos;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long nextCursor;
@property (nonatomic) double triggerTime;

- (void)clearInitData;
- (void).cxx_destruct;

@end
