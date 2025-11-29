@class NSMutableDictionary, NSMutableSet;

@interface LynxPropertyDiffMap : NSObject

@property (retain, nonatomic) NSMutableDictionary *backingMap;
@property (retain, nonatomic) NSMutableSet *dirtyPropertiesSet;

- (void)deleteKey:(id)a0;
- (void)putValue:(id)a0 forKey:(id)a1;
- (id)getValueForKey:(id)a0 defaultValue:(id)a1;
- (id)getUpdatedValueForKey:(id)a0;
- (BOOL)valueChangedForKey:(id)a0 updateTo:(id *)a1;
- (BOOL)isValueForKeyUpdated:(id)a0;
- (id)getUpdatedKeys;
- (void)clearDirtyRecords;
- (id)getValueForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
