@class NSString, NSData, NSError;

@interface UABSDSocket : UABufferSocket {
    int _family;
    NSString *_familyName;
    NSData *_ipAddress;
    NSError *_dnsError;
    unsigned long long _retries;
}

@property (readonly, nonatomic) int socketFd;
@property (readonly, nonatomic) NSString *ipType;

+ (id)cellularIPTypeSet;

- (id)initWithHost:(id)a0 port:(id)a1;
- (void)bsdSocketOccursErrorWithMark:(id)a0;
- (void)dnsResolution;
- (void)createSocketFd;
- (BOOL)isSocketFdValidate;
- (void)errorWithCode:(int)a0 mark:(id)a1;
- (void)readData;
- (void).cxx_destruct;
- (void)disconnect;
- (void)writeData:(id)a0;
- (void)connect;
- (void)dealloc;

@end
