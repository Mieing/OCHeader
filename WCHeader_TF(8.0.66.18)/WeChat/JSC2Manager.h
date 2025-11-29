@class NSString;

@interface JSC2Manager : MMRootService <MMServiceProtocol> {
    struct vector<JSC2ReportKey, std::allocator<JSC2ReportKey>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<JSC2ReportKey *, std::allocator<JSC2ReportKey>> { unsigned long long *__value_; } __end_cap_; } _keys;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)hook;

@end
