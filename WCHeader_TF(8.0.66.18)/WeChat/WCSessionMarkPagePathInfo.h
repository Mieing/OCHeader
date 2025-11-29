@class NSString, NSMutableArray;

@interface WCSessionMarkPagePathInfo : MMObject <NSCopying>

@property (retain, nonatomic) NSString *pagePathId;
@property (retain, nonatomic) NSString *sessionPageId;
@property (nonatomic) unsigned int index;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSMutableArray *pagePaths;

- (id)init;
- (id)toString;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
