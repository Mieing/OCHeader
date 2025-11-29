@class NSHashTable;

@interface AFDTemporaryColorManager : NSObject

@property (retain, nonatomic) NSHashTable *weakRefColors;

+ (id)sharedInstance;

- (void)registerColor:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
