@interface RTESectionChangeInfo : MMObject

@property (nonatomic) unsigned long long location;
@property (nonatomic) unsigned long long deletedLength;
@property (nonatomic) unsigned long long insertedLength;

- (BOOL)isValid;

@end
