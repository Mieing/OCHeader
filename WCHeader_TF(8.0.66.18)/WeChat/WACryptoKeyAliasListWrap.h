@class NSString, NSMutableArray;

@interface WACryptoKeyAliasListWrap : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *keyAliasList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_keyAliasList;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
