@class NSString;

@interface WCSessionPagePathBusinessParam : MMObject <NSCopying>

@property (retain, nonatomic) NSString *pagePathId;
@property (retain, nonatomic) NSString *value;
@property (retain, nonatomic) NSString *dataPath;
@property (retain, nonatomic) NSString *businessId;
@property (nonatomic) unsigned long long action;

- (id)toString;
- (id)getAttrDictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
