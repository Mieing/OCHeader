@class BuiltinIPList, NetworkControl, HostList;

@interface NetworkSectResp : WXPBGeneratedMessage

@property (retain, nonatomic) HostList *newHostList;
@property (retain, nonatomic) NetworkControl *networkControl;
@property (retain, nonatomic) BuiltinIPList *builtinIplist;
@property (nonatomic) unsigned int certRegion;

+ (void)initialize;

- (void)setCertRegion:(unsigned int)a0;
- (unsigned int)certRegion;
- (void)setBuiltinIplist:(id)a0;
- (id)builtinIplist;
- (void)setNetworkControl:(id)a0;
- (id)networkControl;
- (void)setNewHostList:(id)a0;
- (id)newHostList;

@end
