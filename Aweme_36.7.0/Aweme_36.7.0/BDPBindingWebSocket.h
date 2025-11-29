@class NSString, NSDictionary, NSArray, SRWebSocket, NSNumber;

@interface BDPBindingWebSocket : NSObject

@property (retain, nonatomic) SRWebSocket *srWebSocket;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSDictionary *header;
@property (copy, nonatomic) NSDictionary *header2;
@property (copy, nonatomic) NSArray *protocols;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSString *referer;
@property (copy, nonatomic) NSString *userAgent;
@property (retain, nonatomic) NSNumber *connectTimeout;

- (void).cxx_destruct;

@end
