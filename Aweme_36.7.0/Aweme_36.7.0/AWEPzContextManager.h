@class NSMutableSet, NSMutableDictionary;

@interface AWEPzContextManager : NSObject

@property (retain, nonatomic) NSMutableSet *components;
@property (retain, nonatomic) NSMutableDictionary *componentIDMap;
@property (retain, nonatomic) NSMutableDictionary *componentTypeMap;
@property (retain, nonatomic) NSMutableDictionary *cTagMap;
@property (retain, nonatomic) NSMutableDictionary *sTagMap;

- (void)addComponent:(id)a0 toMap:(id)a1 forKey:(id)a2;
- (void)removeComponent:(id)a0 fromMap:(id)a1 forKey:(id)a2;
- (id)getAllComponents;
- (id)queryComponentsWithComponentID:(id)a0;
- (id)queryComponentsWithComponentType:(id)a0;
- (id)queryComponentsWithCTag:(id)a0;
- (id)queryComponentsWithSTag:(id)a0;
- (void).cxx_destruct;
- (void)addComponent:(id)a0;
- (void)removeComponent:(id)a0;

@end
