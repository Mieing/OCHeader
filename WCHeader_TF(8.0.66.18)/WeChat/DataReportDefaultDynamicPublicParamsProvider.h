@class NSString;

@interface DataReportDefaultDynamicPublicParamsProvider : NSObject <DataReportDynamicPublicParamsProvider> {
    NSString *m_deviceModel;
    NSString *m_osVersion;
    NSString *m_ipv4;
    NSString *m_ipv6;
    unsigned long long m_lastGetIPTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDynamicPublicParams:(id)a0;
- (void)setDynamicPublicEventParams:(id)a0 params:(id)a1;
- (long long)getNetworkType:(int)a0;
- (id)getIPV6Address:(id)a0;
- (id)getIPV4Address:(id)a0;
- (id)getIPAddressArray;
- (BOOL)isValidatIP:(id)a0;
- (void).cxx_destruct;

@end
