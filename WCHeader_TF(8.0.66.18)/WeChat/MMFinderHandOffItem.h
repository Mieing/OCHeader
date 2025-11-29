@class NSString;

@interface MMFinderHandOffItem : MMHandOffItem <NSCopying>

@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *objectId;
@property (copy, nonatomic) NSString *objectNonceId;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
