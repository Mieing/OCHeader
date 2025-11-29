@class NSData, NSDictionary, NSString;

@interface PIAResourceResponse : NSObject <PIAResourceResponseProtocol>

@property (retain, nonatomic) NSData *data;
@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSDictionary *headers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0 code:(long long)a1 headers:(id)a2;
- (void).cxx_destruct;

@end
