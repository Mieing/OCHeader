@class NSString;

@interface CJPayDNSResolver : NSObject

@property (retain) NSString *hostName;
@property BOOL done;
@property BOOL cancel;
@property (retain) NSString *ip;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)resolve;

@end
