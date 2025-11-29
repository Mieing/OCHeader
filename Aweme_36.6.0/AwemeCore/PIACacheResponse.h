@class NSData, NSString, NSURLResponse;

@interface PIACacheResponse : NSObject <PIACacheResponseProtocol>

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSURLResponse *response;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
