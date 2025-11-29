@class NSString, NSDictionary;

@interface IESPrefetchJSNetworkRequestModel : NSObject

@property (copy, nonatomic) NSString *hashValue;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) id params;
@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSString *traceId;
@property (nonatomic) BOOL needCommonParams;
@property (nonatomic) BOOL doRequestEvenInCache;
@property (nonatomic) BOOL ignoreCache;
@property (copy, nonatomic) NSDictionary *extras;
@property (nonatomic) BOOL callbackOnBackgroundThread;

- (id)dataDescFromDict:(id)a0;
- (void)addHeadersDict:(id)a0;
- (void)addParamsDict:(id)a0;
- (void)addDataDict:(id)a0;
- (void).cxx_destruct;
- (id)dictionary;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)debugDescription;
- (id)calculateHash;

@end
