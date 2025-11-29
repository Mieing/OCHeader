@class NSString, NSArray, NSError;

@interface AMapDNSResolver : NSObject

@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) struct __CFHost { } *host;
@property BOOL done;
@property (nonatomic) BOOL shouldCancel;
@property (copy, nonatomic) NSString *hostname;
@property (retain, nonatomic) NSArray *addressStrs;
@property (retain, nonatomic) NSError *error;

- (void)hostResolutionDoneWithAddresses:(id)a0;
- (void)asyncLookupComplete:(id /* block */)a0;
- (void).cxx_destruct;
- (void)stopHostResolution;
- (id)initWithHost:(id)a0;
- (void)dealloc;

@end
