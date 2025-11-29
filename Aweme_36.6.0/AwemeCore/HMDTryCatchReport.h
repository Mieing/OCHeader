@class NSArray;

@interface HMDTryCatchReport : NSObject

@property (nonatomic) unsigned long long address;
@property (nonatomic, getter=isReturnAddress) BOOL returnAddress;
@property (nonatomic) unsigned long long headerAddress;
@property (nonatomic) unsigned long long functionOffset;
@property (nonatomic) unsigned long long nextFunctionOffset;
@property (nonatomic) unsigned long long personality;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSArray *ranges;
@property (readonly, nonatomic) unsigned long long realAddress;
@property (readonly, nonatomic) unsigned long long functionAddress;
@property (readonly, nonatomic) unsigned long long nextFunctionAddress;
@property (readonly, nonatomic, getter=isCatchable) BOOL catchable;

- (unsigned long long)functionAddress;
- (unsigned long long)nextFunctionAddress;
- (unsigned long long)realAddress;
- (void).cxx_destruct;
- (unsigned long long)count;

@end
