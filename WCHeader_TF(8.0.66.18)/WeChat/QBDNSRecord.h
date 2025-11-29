@class NSString;

@interface QBDNSRecord : NSObject {
    BOOL _expired;
    int _ttl;
    long long _timeStamp;
}

@property (readonly, nonatomic) NSString *value;

- (id)init:(id)a0 ttl:(int)a1;
- (BOOL)expired;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
