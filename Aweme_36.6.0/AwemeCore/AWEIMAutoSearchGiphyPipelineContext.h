@class AWEIMGiphySearchResultWrapper, NSString, NSDictionary, NSMutableSet;
@protocol IESIMHttpTask;

@interface AWEIMAutoSearchGiphyPipelineContext : NSObject <AWEIMTaskPipelineContext>

@property (nonatomic) BOOL isCancelled;
@property (nonatomic) BOOL intervene;
@property (nonatomic) BOOL usingCache;
@property (readonly, nonatomic) BOOL isLoadMore;
@property (nonatomic) BOOL noSearchResult;
@property (nonatomic) BOOL refreshCache;
@property (copy, nonatomic) NSString *loginUid;
@property (copy, nonatomic) NSString *searchKey;
@property (nonatomic) long long offset;
@property (nonatomic) long long queryIndex;
@property (nonatomic) unsigned long long conversationType;
@property (copy, nonatomic) NSString *conversationID;
@property (weak, nonatomic) id<IESIMHttpTask> prevTask;
@property (copy, nonatomic) NSDictionary *rawData;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *requestSource;
@property (retain, nonatomic) NSMutableSet *emoticonIDSet;
@property (retain, nonatomic) AWEIMGiphySearchResultWrapper *searchData;
@property (nonatomic) BOOL skipCache;
@property (copy, nonatomic) NSString *searchLogID;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL noError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;

@end
