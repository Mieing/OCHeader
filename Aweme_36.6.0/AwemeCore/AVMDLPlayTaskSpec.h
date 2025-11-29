@interface AVMDLPlayTaskSpec : AVMDLTaskSpec

@property (nonatomic) unsigned long long limitSize;
@property (nonatomic) BOOL isNative;

- (id)init;

@end
