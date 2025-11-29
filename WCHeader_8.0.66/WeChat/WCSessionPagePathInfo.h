@class NSString, NSMutableArray;

@interface WCSessionPagePathInfo : MMObject <NSCopying>

@property (retain, nonatomic) NSString *pageName;
@property (nonatomic) unsigned long long enterTimestampMs;
@property (nonatomic) unsigned long long quitTimestampMs;
@property (nonatomic) unsigned long long interval;
@property (retain, nonatomic) NSMutableArray *businessParams;
@property (retain, nonatomic) NSMutableArray *viewOperation;

- (id)init;
- (id)toString;
- (id)getAttrDictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
