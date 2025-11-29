@class NSString, NSDictionary;

@interface IRISDataRequestInfo : NSObject

@property (copy, nonatomic) NSString *HTTPUrl;
@property (retain, nonatomic) NSDictionary *packet;
@property (retain, nonatomic) id userInfo;
@property (weak, nonatomic) id caller;

- (void).cxx_destruct;

@end
