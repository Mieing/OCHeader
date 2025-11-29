@interface EditEmoticonInfo : MMObject

@property (nonatomic) unsigned long long index;
@property (nonatomic) unsigned long long source;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL uploadSuccess;

- (id)initWithData:(unsigned long long)a0 editFileSource:(unsigned long long)a1 editFileType:(unsigned long long)a2;

@end
