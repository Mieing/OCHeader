@class NSString;

@interface AppTVItem : NSObject <PBCoding>

@property (retain, nonatomic) NSString *tvInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_tvInfo;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void)dealloc;
- (id)toXML;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
