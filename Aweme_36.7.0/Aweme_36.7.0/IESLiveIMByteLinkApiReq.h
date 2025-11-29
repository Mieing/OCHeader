@class NSString, NSMutableDictionary, NSData;

@interface IESLiveIMByteLinkApiReq : NSObject

@property (nonatomic) long long serviceID;
@property (retain, nonatomic) NSMutableDictionary *queryParams;
@property (retain, nonatomic) NSMutableDictionary *headers;
@property (retain, nonatomic) NSString *uri;
@property (retain, nonatomic) NSData *payload;
@property (nonatomic) double timeout;
@property (nonatomic) BOOL needFallback;
@property (nonatomic) long long httpMethod;
@property (copy, nonatomic) NSString *httpURL;

- (BOOL)fallbackToHTTP;
- (void).cxx_destruct;

@end
