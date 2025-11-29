@class NSString;

@interface WCSessionPagePathMergeInfo : MMObject <NSCopying>

@property (retain, nonatomic) NSString *sid;
@property (retain, nonatomic) NSString *pagePathId;
@property (nonatomic) unsigned int count;
@property (nonatomic) unsigned long long interval;

- (id)toString;
- (id)getAttrDictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
