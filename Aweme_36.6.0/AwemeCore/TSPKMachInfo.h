@class NSString;

@interface TSPKMachInfo : NSObject

@property (nonatomic) struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *machHeader;
@property (nonatomic) long long machSlide;
@property (copy, nonatomic) NSString *machName;
@property (nonatomic) long long textVMStart;
@property (nonatomic) long long textVMEnd;

- (void)fixSortedRules:(id)a0;
- (id)initWithHeader:(struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)a0 slide:(long long)a1 name:(const char *)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void).cxx_destruct;

@end
