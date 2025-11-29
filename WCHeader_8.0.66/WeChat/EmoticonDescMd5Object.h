@class NSNumber;

@interface EmoticonDescMd5Object : CEmoticonWrap

@property (retain, nonatomic) NSNumber *pidIndex;
@property (retain, nonatomic) NSNumber *customIndex;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
