@class NSString;

@interface AWEStudioReachabilityImpl : NSObject <AWEStudioReachabilityProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isWiFiConnected;
- (BOOL)is2GConnected;
- (BOOL)is3GConnected;
- (BOOL)is4GConnected;
- (BOOL)is5GConnected;
- (BOOL)isNetworkConnected;

@end
