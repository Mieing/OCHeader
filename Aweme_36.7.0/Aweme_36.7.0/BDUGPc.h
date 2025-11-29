@class NSMutableArray;

@interface BDUGPc : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableArray *diffs;
@property (nonatomic) unsigned long long start1;
@property (nonatomic) unsigned long long start2;
@property (nonatomic) unsigned long long length1;
@property (nonatomic) unsigned long long length2;

- (id)description;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
