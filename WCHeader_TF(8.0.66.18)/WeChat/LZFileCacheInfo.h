@interface LZFileCacheInfo : NSObject

@property (readonly, nonatomic) long long seqNo;
@property (nonatomic) struct _LzRange { unsigned long long location; unsigned long long length; } writeRange;
@property (nonatomic) long long syncOffset;

- (id)initWithSeq:(long long)a0;

@end
