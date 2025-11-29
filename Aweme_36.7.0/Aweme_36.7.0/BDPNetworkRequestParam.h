@class NSData, NSString, NSArray, NSURL, NSDictionary, NSObject, BDPMultiRequestBody, NSMapTable;
@protocol OS_dispatch_queue;

@interface BDPNetworkRequestParam : NSObject {
    NSMapTable *_customMap;
}

@property (retain, nonatomic) BDPMultiRequestBody *multiRequestBody;
@property (nonatomic) unsigned long long engineType;
@property (nonatomic) long long methodType;
@property (copy, nonatomic) NSString *requestFrom;
@property (copy, nonatomic) NSString *URLString;
@property (copy, nonatomic) NSArray *URLStrings;
@property (nonatomic) unsigned long long retryCount;
@property (copy, nonatomic) NSDictionary *requestQuery;
@property (copy, nonatomic) NSData *requestBody;
@property (copy, nonatomic) NSDictionary *allHTTPHeaderFields;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) BOOL isInnerRequest;
@property (nonatomic) long long requestType;
@property (nonatomic) BOOL enableHttpCache;
@property (nonatomic) BOOL returnCacheElseLoad;
@property (nonatomic) unsigned long long tagType;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSString *pagePath;
@property (copy, nonatomic) NSString *pageUrl;
@property (copy, nonatomic) NSString *startPagePath;
@property (copy, nonatomic) NSString *startPageUrl;
@property (nonatomic) BOOL isPageFP;
@property (nonatomic) BOOL callbackToDelegate;
@property (nonatomic) long long options;
@property (nonatomic) id *progress;
@property (retain, nonatomic) NSURL *downloadDestinationURL;
@property (copy, nonatomic) id /* block */ downloadHeaderCallback;
@property (copy, nonatomic) id /* block */ downloadDataCallback;
@property (copy, nonatomic) id /* block */ didCompleteCallback;
@property (copy, nonatomic) id /* block */ willPerformRedirectionCallback;
@property (copy, nonatomic) NSDictionary *commonMonitorParams;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callBackQueue;
@property (nonatomic) BOOL needCallbackInChildThread;

+ (id)paramWithEngineType:(unsigned long long)a0;

- (id)generateRequest;
- (id)processHeader;
- (id)processHeader2;
- (long long)priorityWithString:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setCustomData:(id)a0 forKey:(id)a1;
- (id)customDataForKey:(id)a0;

@end
