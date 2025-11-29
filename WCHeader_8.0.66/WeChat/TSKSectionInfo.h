@class NSString;

@interface TSKSectionInfo : TSKBaseModel <NSCopying>

@property (nonatomic) int sentenceId;
@property (nonatomic) int sentenceStartMs;
@property (nonatomic) int sentenceEndMs;
@property (retain, nonatomic) NSString *role;
@property (nonatomic) BOOL roleChanged;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
