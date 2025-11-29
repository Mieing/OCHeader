@class NSMapTable, NSString, NSArray, NSDictionary, NSData, NSURL, XPlayMultiRequestBody;

@interface XPlayNetworkRequestParam : NSObject {
    NSMapTable *_customMap;
}

@property (retain, nonatomic) XPlayMultiRequestBody *multiRequestBody;
@property (nonatomic) unsigned long long engineType;
@property (nonatomic) long long methodType;
@property (copy, nonatomic) NSString *URLString;
@property (copy, nonatomic) NSArray *URLStrings;
@property (nonatomic) unsigned long long retryCount;
@property (copy, nonatomic) NSDictionary *requestQuery;
@property (copy, nonatomic) NSData *requestBody;
@property (copy, nonatomic) NSDictionary *allHTTPHeaderFields;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) long long requestType;
@property (nonatomic) BOOL enableHttpCache;
@property (nonatomic) unsigned long long tagType;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSString *pagePath;
@property (copy, nonatomic) NSString *pageUrl;
@property (nonatomic) long long options;
@property (nonatomic) id *progress;
@property (retain, nonatomic) NSURL *downloadDestinationURL;
@property (copy, nonatomic) id /* block */ downloadHeaderCallback;
@property (copy, nonatomic) id /* block */ downloadDataCallback;
@property (copy, nonatomic) id /* block */ didCompleteCallback;
@property (copy, nonatomic) NSDictionary *commonMonitorParams;
@property (copy, nonatomic) NSString *scene;

+ (id)paramWithEngineType:(unsigned long long)a0;

- (id)generateRequest;
- (id)processHeader;
- (void).cxx_destruct;
- (id)init;
- (void)setCustomData:(id)a0 forKey:(id)a1;
- (id)customDataForKey:(id)a0;

@end
