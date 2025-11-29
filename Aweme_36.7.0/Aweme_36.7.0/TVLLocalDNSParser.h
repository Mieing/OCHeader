@interface TVLLocalDNSParser : TVLBaseDNSParser

@property (nonatomic, getter=isResolutionSucceeded) BOOL resolutionSucceeded;
@property (nonatomic, getter=isCanceled) BOOL canceled;

- (void)parseHostname;
- (id)resolvedAddressesWithAddressArrayRef:(struct __CFArray { } *)a0;
- (id)initWithHostname:(id)a0;
- (void)start;
- (void)cancel;

@end
