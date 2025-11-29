@class NSData, NSString, NSURL, TTRequestModel, NSDictionary, NSObject, NSProgress, NSURLRequest;
@protocol OS_dispatch_queue;

@interface TTNetworkManagerApiParameters : NSObject

@property (copy, nonatomic) NSString *URLString;
@property (retain, nonatomic) TTRequestModel *model;
@property (retain, nonatomic) id params;
@property (copy, nonatomic) NSString *method;
@property (nonatomic) BOOL needCommonParams;
@property (copy, nonatomic) NSDictionary *headerField;
@property (nonatomic) BOOL enableHttpCache;
@property (nonatomic) BOOL verifyRequest;
@property (nonatomic) BOOL isCustomizedCookie;
@property (copy, nonatomic) id /* block */ bodyBlock;
@property (retain, nonatomic) NSData *bodyField;
@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) unsigned long long uploadFileOffset;
@property (nonatomic) unsigned long long uploadFileLength;
@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) Class requestSerializer;
@property (retain, nonatomic) Class modelResponseSerializer;
@property (nonatomic) BOOL useJsonResponseSerializer;
@property (retain, nonatomic) Class jsonResponseSerializer;
@property (retain, nonatomic) Class binaryResponseSerializer;
@property (copy, nonatomic) id /* block */ modelCallback;
@property (copy, nonatomic) id /* block */ modelCallbackWithResponse;
@property (copy, nonatomic) id /* block */ headerCallback;
@property (copy, nonatomic) id /* block */ dataCallback;
@property (copy, nonatomic) id /* block */ callback;
@property (copy, nonatomic) id /* block */ callbackWithResponse;
@property (copy, nonatomic) id /* block */ redirectCallback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatch_queue;
@property (retain, nonatomic) NSURL *destination;
@property (nonatomic) BOOL isAppend;
@property (copy, nonatomic) id /* block */ progressCallback;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *chunk_dispatch_queue;
@property (retain, nonatomic) NSURLRequest *nsrequest;
@property (copy, nonatomic) NSString *mainDocURL;
@property (nonatomic) SEL entrySelector;

- (id)initWithURLString:(id)a0 requestModel:(id)a1 params:(id)a2 method:(id)a3 needCommonParams:(BOOL)a4 headerField:(id)a5 enableHttpCache:(BOOL)a6 verifyRequest:(BOOL)a7 isCustomizedCookie:(BOOL)a8 constructingBodyWithBlock:(id /* block */)a9 bodyField:(id)a10 filePath:(id)a11 offset:(unsigned long long)a12 length:(unsigned long long)a13 progress:(id *)a14 requestSerializer:(Class)a15 modelResponseSerializer:(Class)a16 useJsonResponseSerializer:(BOOL)a17 jsonResponseSerializer:(Class)a18 binaryResponseSerializer:(Class)a19 modelCallback:(id /* block */)a20 modelCallbackWithResponse:(id /* block */)a21 headerCallback:(id /* block */)a22 dataCallback:(id /* block */)a23 callback:(id /* block */)a24 callbackWithResponse:(id /* block */)a25 redirectCallback:(id /* block */)a26 dispatch_queue:(id)a27 destination:(id)a28 isAppend:(BOOL)a29 progressCallback:(id /* block */)a30 completionHandler:(id /* block */)a31 timeout:(double)a32 redirectHeaderDataCallbackQueue:(id)a33 nsrequest:(id)a34 mainDocURL:(id)a35 entrySelector:(SEL)a36;
- (void).cxx_destruct;

@end
