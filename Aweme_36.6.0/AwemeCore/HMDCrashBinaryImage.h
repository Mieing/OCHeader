@class NSString, NSArray;

@interface HMDCrashBinaryImage : HMDCrashModel

@property (copy, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *name;
@property (nonatomic) unsigned long long base;
@property (nonatomic) unsigned long long size;
@property (copy, nonatomic) NSArray *segments;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *arch;
@property (nonatomic) BOOL load;
@property (nonatomic) BOOL isEnvAbnormal;
@property (nonatomic) BOOL isMain;

- (BOOL)containingAddress:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)updateWithDictionary:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
