@class NSString;

@interface BDPDNSResolver : NSObject

@property (retain) NSString *hostName;
@property BOOL done;
@property BOOL cancel;
@property (retain) NSString *ip;

- (void).cxx_destruct;

@end
