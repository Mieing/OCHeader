@class NSString, NSHashTable;

@interface IESECShopSLIItemStateRegistry : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) NSHashTable *listeners;

+ (id)registryWithName:(id)a0 value:(id)a1;

- (id)getListeners;
- (void).cxx_destruct;
- (void)addListener:(id)a0;

@end
