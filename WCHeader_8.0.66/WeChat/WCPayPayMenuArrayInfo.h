@class NSString, NSMutableArray;

@interface WCPayPayMenuArrayInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *m_itemArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_itemArray;
+ (void)initialize;
+ (id)genFromDictionary:(id)a0;
+ (void)saveFromDictionary:(id)a0 withScene:(int)a1;
+ (id)loadFromFileWithScene:(int)a0;

- (id)getPBPropertyTable;
- (id)init;
- (void).cxx_destruct;

@end
