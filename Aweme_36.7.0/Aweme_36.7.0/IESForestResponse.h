@class NSDate, NSString, NSData, UIImage, NSURLResponse, NSURLRequest, IESForestEventTrackData, IESForestRequest;
@protocol IESForestPostProcessedDataProtocol;

@interface IESForestResponse : NSObject <IESForestResponseProtocol>

@property (retain) IESForestEventTrackData *eventTrackData;
@property (nonatomic) BOOL isWebSuccess;
@property (nonatomic) BOOL isImageSuccess;
@property (retain, nonatomic) IESForestRequest *request;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *bundle;
@property (nonatomic) unsigned long long version;
@property (copy, nonatomic) NSData *data;
@property (retain, nonatomic) NSURLResponse *nsURLResponse;
@property (copy, nonatomic) UIImage *image;
@property (nonatomic) long long sourceType;
@property (copy, nonatomic) NSString *sourceUrl;
@property (copy, nonatomic) NSString *rawUrl;
@property (copy, nonatomic) NSString *absolutePath;
@property (readonly, copy, nonatomic) NSString *resolvedURL;
@property (retain, nonatomic) NSDate *expiredDate;
@property (copy, nonatomic) NSString *fetcher;
@property (copy, nonatomic) NSString *debugInfo;
@property (copy, nonatomic) NSString *cacheKey;
@property (retain, nonatomic) id<IESForestPostProcessedDataProtocol> processedData;
@property (retain, nonatomic) NSURLRequest *redirectNewRequest;
@property (retain, nonatomic) NSURLResponse *redirectOldResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)responseWithResponse:(id)a0;

- (BOOL)isFromMemory;
- (id)resetEventTrackData;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0;
- (BOOL)isSuccess;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isOffline;
- (id)sourceTypeDescription;

@end
