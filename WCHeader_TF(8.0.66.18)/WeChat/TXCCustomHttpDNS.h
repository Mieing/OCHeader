@class NSMutableArray;
@protocol TXCustomHttpDNSDelegate;

@interface TXCCustomHttpDNS : NSObject

@property BOOL enableCustomHttpDNS;
@property (weak) id<TXCustomHttpDNSDelegate> customHttpDNSDelegate;
@property (retain, nonatomic) NSMutableArray *whiteHostArray;

+ (id)sharedInstance;

- (id)parseAddressUseCustomHttpDNS:(id)a0 httpMethod:(id)a1;
- (void)enableCusomHttpDNS:(BOOL)a0 httpDNSDelegate:(id)a1;
- (void)onCustomHttpDNS:(id)a0 ipList:(id)a1;
- (BOOL)isInWhiteHost:(id)a0;
- (BOOL)isEnableCustomHttpDNS;
- (BOOL)isIPAddress:(id)a0;
- (id)getProtocolClasses;
- (BOOL)verifyCustomHttpDNS:(id)a0 httpMethod:(id)a1;
- (void).cxx_destruct;

@end
