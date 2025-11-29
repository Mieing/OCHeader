@class NSString;

@interface WCSessionPagePathBusinessData : MMObject <NSCopying>

@property (retain, nonatomic) NSString *businessId;
@property (retain, nonatomic) NSString *value;
@property (retain, nonatomic) NSString *dataPath;

- (id)toString;
- (id)getAttrDictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
