@class NSLock, NSMutableDictionary;

@interface AWEPOIVirgoUnitDefaultManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *unitMap;
@property (retain, nonatomic) NSLock *unitLock;

- (void)registerUnit:(id /* block */)a0 withKey:(id)a1;
- (void)removeUnitWithKey:(id)a0;
- (BOOL)executeWithKey:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
