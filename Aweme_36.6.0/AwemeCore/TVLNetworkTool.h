@interface TVLNetworkTool : NSObject

- (BOOL)isCellularDefault;
- (unsigned int)getCellularIndex;
- (BOOL)isWifiDefault;
- (int)getNetworkType;
- (BOOL)IsLoopbackOrUnspecifiedAddress:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0;
- (BOOL)ShouldIgnoreInterface:(id)a0 policy:(long long)a1;
- (id)getNetworkClass;

@end
