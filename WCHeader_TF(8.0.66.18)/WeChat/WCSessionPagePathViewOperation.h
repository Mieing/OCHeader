@class NSString, NSMutableArray;

@interface WCSessionPagePathViewOperation : MMObject <NSCopying>

@property (retain, nonatomic) NSString *pageName;
@property (retain, nonatomic) NSString *viewId;
@property (nonatomic) unsigned long long action;
@property (nonatomic) unsigned long long timestampMs;
@property (retain, nonatomic) NSMutableArray *businessParams;

- (id)init;
- (id)toString;
- (id)getAttrDictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
