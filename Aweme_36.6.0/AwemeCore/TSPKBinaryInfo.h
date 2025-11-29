@class NSArray;

@interface TSPKBinaryInfo : NSObject

@property (retain, nonatomic) NSArray *machInfos;

+ (id)sharedInstance;

- (BOOL)isRulesAllFixed:(id)a0;
- (BOOL)fixSortedRules:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })textRangeForHeader:(struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)a0;
- (unsigned long long)slideOfMachName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
